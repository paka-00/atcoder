#include<iostream>
#include<string>
using namespace std;

int main(){
  string s,t;
  cin>>s>>t;
  string temp=s;
  for(int i=0;i<s.size();i++){
    if(temp==t){cout<<"Yes"<<endl;return 0;}
    temp=s;
    temp[i]=s[i+1];
    temp[i+1]=s[i];
  }
  if(temp==t){cout<<"Yes"<<endl;return 0;}
  cout<<"No"<<endl;return 0;
}
