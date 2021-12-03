#include <bits/stdc++.h>

using namespace std;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
int main(){
  int n,m;cin>>n>>m;
  int i,dp[n+10];
  int a[m],A[n+10],tmp=0;
  for(i=0;i<m;i++)cin>>a[i];
  for(i=0;i<n+10;i++){
    if(i==a[tmp]){A[i]=-1;tmp++;}
    else A[i]=0;
  }
  long long mod=1000000007;
  for(i=0;i<=n;i++)dp[i]=0;
  dp[0]=1;
  for(i=0;i<n;i++){
    if(A[i+1]==0)dp[i+1]+=dp[i]%mod;
    if(A[i+2]==0)dp[i+2]+=dp[i]%mod;
  }
  cout<<dp[i]%mod;
}
