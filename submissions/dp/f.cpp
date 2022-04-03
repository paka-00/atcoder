#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)


int main(){
   string s,t;cin>>s>>t;
   int n=s.size(),m=t.size();
   vector<vector<int>>dp(n+1,vector<int>(m+1));
   for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
           if(s[i-1]==t[j-1])dp[i][j]=dp[i-1][j-1]+1;
           else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
       }
   }
   int l=dp[n][m];
   string ans;
   int i=n,j=m;
   while(i>0&&j>0){
       if(s[i-1]==t[j-1]){
            ans=s[i-1]+ans;
            i--;
            j--;

        }else if(dp[i][j]==dp[i-1][j]){
            i--;
        }else{
            j--;
        }
   }
   cout<<ans<<endl;
}
