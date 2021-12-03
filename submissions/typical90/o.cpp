#include <bits/stdc++.h>
using namespace std;

int main(){
  string n;
  int k;
  string s;
  cin>>n>>k;
  for(int i=0;i<k;i++){
    unsigned long temp=0;
    for(int j=0;j<n.size();j++){
      temp=temp*8+int(n[j]-'0');
    }
    n="";
    while(temp>0){
      n+=char(temp%9+'0');
      temp/=9;
    }if(n=="")n='0';
    
    s="";
    for(int j=n.size()-1;j>=0;j--){
      if(n[j]=='8')s+='5';
      else s+=n[j];
    }
    n=s;
  }
  cout<<n<<endl;
}
