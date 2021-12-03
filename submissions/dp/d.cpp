#include<iostream>
#include<string>
#include<algorithm>
#include <cstdlib>

using namespace std;


template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main(){
  int n,W;int i,j;
  cin>>n>>W;
  long long v[n],w[n];
  for(i=0;i<n;i++)cin>>w[i]>>v[i];
  long long dp[n+1][W+1];//i番目までの品物を使って重さjまでにした時の最大価値
  for (int w = 0; w <= W; ++w) dp[0][w] = 0;
  for(i=0;i<n;i++){
    for(j=0;j<=W;j++){
      if(j>=w[i])
        dp[i+1][j] = max(dp[i][j-w[i]]+v[i],dp[i][j]); 
      else dp[i+1][j]=dp[i][j];
    }
  }
  cout<<dp[n][W];
}
  
