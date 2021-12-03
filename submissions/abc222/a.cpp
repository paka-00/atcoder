#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
  string s;
  cin>>s;
  int i;
  for(i=0;i<4-s.size();i++)cout<<"0";
  cout<<s;
}
