#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    vector<ll>b(n);
    b[0]=a[0];
    for(int i=1;i<n;i++)b[i]=b[i-1]+a[i];
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=b[n-1]-b[i]-(n-i-1)*a[i];
    }

    cout<<ans<<endl;
}