#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;cin>>n>>k;
  long long a[n];
  long long ans=0;
  int i,j;
  for(i=0;i<n;i++)cin>>a[i];
  for(i=0;i<n-k+1;i++){
    for(j=0;j<k;j++)ans+=a[i+j];
  }
  cout<<ans;
}
