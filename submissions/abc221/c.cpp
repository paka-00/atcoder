#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  string N;cin>>N;
  sort(N.begin(),N.end());
  int m,n;
  int i,j;
  int ans=0;
  do{
    for(i=1;i<N.size();i++){
      m=0;n=0;
      for(j=0;j<i;j++)m=m*10+N[j]-'0';
      for(j=i;j<N.size();j++)n=n*10+N[j]-'0';
      ans=max(ans,m*n);
      
    }
  }
  while(next_permutation(N.begin(),N.end()));
  cout<<ans;
  return 0;
}
