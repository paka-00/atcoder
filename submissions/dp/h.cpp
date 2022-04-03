#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int h,w;
int dx[2]={1,0};
int dy[2]={0,1};
ll mod=1000000007;
vector<vector<int>>dp(1001,vector<int>(1001));

void dfs(int x,int y,vector<vector<bool>>used,vector<string>s){
    used[x][y]=true;
    cout<<x<<" "<<y<<endl;
    for(int i=0;i<2;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>=0&&nx<h&&ny>=0&&ny<w&&!used[nx][ny]&&s[nx][ny]!='#'){
            dp[nx][ny]=dp[x][y];
            dfs(nx,ny,used,s);
        }
    }
}
int main(){
   cin>>h>>w;
   vector<string>s;
   rep(i,h){
       string str;cin>>str;
       s.push_back(str);
   }
   dp[0][0]=1;
   for(int i=0;i<h;i++){
       for(int j=0;j<w;j++){
           if(i==0||j==0){
               if(s[i][j]=='#')dp[i][j]=0;
               else if(i==0&&j>0)dp[0][j]=(dp[0][j-1])%mod;
               else if(i>0&&j==0)dp[i][0]=(dp[i-1][0])%mod;
               else continue;
           }
           else{
                if(s[i][j]=='#')dp[i][j]=0;
                else{
                    dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
                    }
           }
       }
   }

   cout<<dp[h-1][w-1]<<endl;
}
