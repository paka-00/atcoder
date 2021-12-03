#include <bits/stdc++.h>
using namespace std;
 
int main(){
  long long n,m;
  cin>>n>>m;
  long long i,j;
  long long t,s;
  cin>>t;
  s=t;
  if(7-(t-1)%7<m){cout<<"No";return 0;}
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(i!=0||j!=0)cin>>s;
      if(s!=t+(7*i)+j){cout<<"No";return 0;}
    }
  }cout<<"Yes";
}
