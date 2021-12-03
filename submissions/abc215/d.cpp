#include <bits/stdc++.h>
using namespace std;


vector<int> pfact(int x){
  vector<int> res;
  for(int i=2;i*i<=x;i++){
    while(x%i==0){
      x/=i;
      res.push_back(i);
    }
  }
  if(x!=1){res.push_back(x);}
  return res;
}

int main(){
  int n,m;cin>>n>>m;
  int a,i,j,k;
  int ans=0;
  vector<bool> b(m+1);
  b.assign(m+1,true);
  for(i=0;i<n;i++){
    cin>>a;
    vector<int>tmp=pfact(a);
    for(j=0;j<tmp.size();j++){
     if(b[tmp[j]]){
       for(k=tmp[j];k<=m;k+=tmp[j])b[k]=false;
     }
    }
  }
  b[1]=true;
  for(i=1;i<=m;i++){if(b[i])ans++;}cout<<ans<<endl;
  for(i=1;i<=m;i++){
    if(b[i])cout<<i<<endl;
  }
}
