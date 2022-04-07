#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = unsigned long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

vector<ll> dp(100010);

ll f (ll x){
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 2; i < x; i++){
		dp[i] = (dp[i-1] + dp[i-2])%mod;
	}
	return dp[x];
}
int main(){
    ll n;cin>>n;
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    f(n+3);
    ll s=dp[n+1]%mod;
    //総数　dp[n+1]
    ll t=n-1;
//0:+,   1:-
    ll ans=(a[0]*s)%mod;
    for(int i=1;i<=t;i++){
        ll t=(dp[i]*dp[n-i])%mod;
        ll tmp=(t*2)%mod;
        ll p=(s+mod-tmp)%mod;
        ans=(ans+(a[i]*p)%mod)%mod;

    }
    cout<<ans%mod<<endl;

}
    
