#include <bits/stdc++.h>
using namespace std;

int main(){
  int s,t,x;
  cin>>s>>t>>x;
  int k=(t-s+24)%24;
  int l=(x-s+24)%24;
  if(k>l)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
