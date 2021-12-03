#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i;cin>>n;
  double a[n],b[n];
  for(i=0;i<n;i++)cin>>a[i]>>b[i];
  double t=0;
  for(i=0;i<n;i++)t+=a[i]/b[i];
  t/=2;
  double ans=0;
  for(i=0;i<n;i++){
    ans+=min(a[i],t*b[i]);
    t-=min(t,a[i]/b[i]);
  }
  cout<<setprecision(15)<<ans;
}
