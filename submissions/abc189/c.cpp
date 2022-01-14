#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n;cin>>n;
    ll a[n],i;
    for(i=0;i<n;i++)cin>>a[i];
    ll ans=0,m;
    for(int l=0;l<n;l++){
        m=a[l];
        for(int r=l;r<n;r++){
            m=min(m,a[r]);
            ans=max(m*(r-l+1),ans);
        }
    }
    cout<<ans<<endl;
}

