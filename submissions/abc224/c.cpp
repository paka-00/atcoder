#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  int i,j,k;
  long x[n],y[n];
  for(i=0;i<n;i++)cin>>x[i]>>y[i];
  pair<long long,long long> a;
  pair<long long,long long> b;
  int ans=0;
  for(i=0;i<n-2;i++){
    for(j=i+1;j<n-1;j++){
      a={y[i]-y[j],x[i]-x[j]};
      for(k=j+1;k<n;k++){
        b={y[j]-y[k],x[j]-x[k]};
        if(a.first*b.second!=a.second*b.first)ans++;
        
      }
    }
  }cout<<ans;
}
