#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n;cin>>n;
    vector<ll> s(n),t(n);
    ll i;
    for(i=0;i<n;i++)cin>>s[i];
    for(i=0;i<n;i++)cin>>t[i];
    vector<ll>ans(n);
    ans[0]=t[0];
    for(i=0;i<2*n;i++){
        ans[i%n]=min(t[i%n],ans[(i-1)%n]+s[(i-1)%n]);
    }
    for(i=0;i<n;i++)cout<<ans[i]<<endl;

}