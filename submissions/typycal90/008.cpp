#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
ll mod= 1000000007;

int main(){
    ll n;cin>>n;
    string s;cin>>s;
    string t="atcoder";
    vector<vector<ll>> dp(n+1,vector<ll>(8));
    int i,j;
    for(i=0;i<n+1;i++)dp[i][0]=1;
    dp[0][0]=1;
    for(i=0;i<n;i++){
        for(j=0;j<7;j++){
            if(s[i]!=t[j])dp[i+1][j+1]=dp[i][j+1];
            else dp[i+1][j+1]=(dp[i][j+1]+dp[i][j])%mod;
        }
    }
    cout<<dp[n][7]<<endl;
}