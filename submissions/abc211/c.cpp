#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;
const int mod = 1e9 + 7;
int main(){
    string s;cin>>s;
    int n=s.size();
    vector<vector<ll>> dp(n+1,vector<ll>(9));
    ll ans=0;
    string t="chokudai";
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=8;j++){
            if(j==0)dp[i][j]=1;
            else if(i==0&&j>0)dp[i][j]=0;
            else if(s[i]!=t[j]&&i*j!=0)dp[i][j]=dp[i-1][j];
            else if(s[i]==t[j]) dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%mod;
        }
    }
    for(i=0;i<n+1;i++){
        for(j=0;j<9;j++){
            cout<<dp[i][j]<<" ";}cout<<endl;}
    cout<<dp[n][8]<<endl;
}

