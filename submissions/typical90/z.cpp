#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  int i,j;
  long long a[n][6];
  long long t[6];
  for(i=0;i<n;i++){
    for(j=0;j<6;j++)cin>>a[i][j];
  }
  long long tmp;
  for(i=0;i<n-1;i++){
    tmp=0;
    for(j=0;j<6;j++)tmp+=a[i][j];
    for(j=0;j<6;j++){
      a[i+1][j]=(a[i+1][j]*tmp)%1000000007;
    }
  }
  long long ans=0;
  for(i=0;i<6;i++)ans=(ans+a[n-1][i])%1000000007;
  cout<<ans;
}
