#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    ll i,j;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    vector<ll>dp(n);
    dp[1]=abs(a[0]-a[1]);
    for(i=2;i<n;i++){
        dp[i]=min(dp[i-2]+abs(a[i-2]-a[i]),dp[i-1]+abs(a[i-1]-a[i]));
    }
    cout<<dp[n-1]<<endl;
}

