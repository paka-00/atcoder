#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  int i,t;
  long long ans=0;
  vector<int>a(200,0);
  
  for(i=0;i<n;i++){
    cin>>t;
    t=t%200;
    if(a[t]!=0)ans+=a[t];
    a[t]++;
  }
  cout<<ans<<endl;
}
