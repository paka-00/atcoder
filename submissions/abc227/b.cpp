#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i;cin>>n;
  int s[n];for(i=0;i<n;i++)cin>>s[i];
  vector<bool>c(n);
  c.assign(n,false);
  int a,b;
  int S;
  int ans=0;
  for(a=1;a<179;a++){
    for(b=1;b<179;b++){
      S=4*a*b+3*a+3*b;
      if(S>1000)continue;
      for(i=0;i<n;i++){if(S==s[i])c[i]=true;}
    }
  }
  for(i=0;i<n;i++){if(!c[i])ans++;}
  cout<<ans<<endl;
}
