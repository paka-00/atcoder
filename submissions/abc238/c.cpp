#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
ll mod = 998244353;
ll inv=499122177;
ll g(ll n){
    n%=mod;
    ll t=n;
    t*=(n+1);t%=mod;
    t*=inv;t%=mod;
    return t;
}

int main(){
    ll n;cin>>n;
    ll t=10;
    ll ans=0;
    for(int i=1;i<=18;i++){
        ll l=t/10;
        ll r=min(n,t-1);
        if(l<=r){
            ans+=g(r-l+1);
            ans%=mod;
        }
        t*=10;
    }
    cout<<ans<<endl;
}