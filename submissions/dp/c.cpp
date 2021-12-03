#include<iostream>
#include<string>
#include<algorithm>
#include <cstdlib>

using namespace std;


template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main(){
  int n,i,j;
  cin>>n;
  int a[n][3];
  for(i=0;i<n;i++)cin>>a[i][0]>>a[i][1]>>a[i][2];
  long long dp[n+1][3];
  for(i=0;i<n;i++){dp[i][0]=a[0][0];dp[i][1]=a[0][1];dp[i][2]=a[0][2];}
  for(i=0;i<n;i++)
    for(j=0;j<3;j++)chmax(dp[i+1][(0+j)%3],max(dp[i][(1+j)%3],dp[i][(2+j)%3])+a[i+1][(0+j)%3]);
  cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]))<<endl;
}
