#include<iostream>
#include<string>
#include<algorithm>
#include <cstdlib>

using namespace std;


template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main(){
  int n,k,i,j;
  cin>>n>>k;
  long long h[n+k+100];
  for(i=1;i<=n;i++)cin>>h[i];
  long long dp[n+k+100];
  for(i=1;i<=n;i++)dp[i]=100000000000000000000;
  dp[1]=0;
  for(i=1;i<=n;i++){
    for(j=1;j<=k;j++){
      chmin(dp[i+j],dp[i]+abs(h[i]-h[i+j]));
    }
  }
  
  cout<<dp[n];
}
