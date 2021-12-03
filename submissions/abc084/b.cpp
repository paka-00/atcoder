#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;cin>>a>>b;
  string s;cin>>s;
  int i;
  for(i=0;i<a;i++){
    if('0'>s[i] || s[i]>'9'){cout<<"No";return 0;}
  }
  if(s[a]!='-'){cout<<"No";return 0;}
  for(i=a+1;i<a+b+1;i++){
  	if('0'>s[i] || s[i]>'9'){cout<<"No";return 0;}
  }
  cout<<"Yes";
}
