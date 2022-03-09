#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
const ll mod=1000000007;

ll pow(ll x, ll n,ll mod) {
    ll ret = 1;
    while(n>0) {
        if(n&1)ret=(ret*x)%mod;
        x=(x*x)%mod;
        n >>= 1;
    }
    return ret%mod;
}

int main(){
    ll n,k;cin>>n>>k;
    ll ans=1;
    for(ll i=1;i<=min(n,(ll)2);i++){
        if(i==1)ans=k%mod;
        else if(i==2)ans=(ans*(k-1))%mod;
    }
    if(n>2)ans=(ans*(pow(k-2,n-2,mod)))%mod;
    cout<<ans<<endl;
}