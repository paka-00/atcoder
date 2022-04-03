#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)


ll mod=1000000007;

int main(){
    int n;cin>>n;
    vector<long double>p(n);
    rep(i,n)cin>>p[i];
    vector<vector<long double>>dp(n+10,vector<long double>(n+10));
    for(int j=0;j<=n;j++)dp[0][j]=0;
    dp[0][0]=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            dp[i+1][j]+=dp[i][j]*(1-p[i]);
            dp[i+1][j+1]+=dp[i][j]*(p[i]);
        }
    }
    long double ans=0;
    for(int j=(n+1)/2;j<=n;j++){
        ans+=dp[n][j];
    }
    cout<<setprecision(18)<<ans<<endl;
}
   
