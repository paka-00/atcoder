#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,t;
  cin>>s;
  cin>>t;
  if((s=="#."&&t==".#")||(s==".#"&&t=="#."))cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
}

