#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  int k;cin>>k;
  int i,j;
  vector <int>a(n);
  vector<int>p(n);
  int t,m,l;
  for(i=0;i<n;i++){
    cin>>t>>m>>l;
    a[i]=t+m+l;
    p[i]=a[i];
  }
  sort(a.begin(),a.end(),greater<int>{});
  int border=a[k-1];
  for(i=0;i<n;i++){
    if(p[i]+300>=border)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}

