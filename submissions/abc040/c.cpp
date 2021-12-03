#include<iostream>

using namespace std;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
int main(){
  int n;cin>>n;
  int i;
  long long a[n+1];
  long long dp[n+1];
  for(i=0;i<n;i++)cin>>a[i];
  for(i=0;i<n;i++)dp[i]=1LL<<60;
  dp[0]=0;
  for(i=1;i<n;i++){
    chmin(dp[i],dp[i-1]+abs(a[i]-a[i-1]));
    if(i>1)chmin(dp[i],dp[i-2]+abs(a[i]-a[i-2]));
  }
  cout<<dp[n-1];
 
  
  
}
