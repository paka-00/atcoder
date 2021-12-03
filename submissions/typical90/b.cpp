#include<iostream>
#include<string>
#include<cmath>

using namespace std;

string binary(int n,int i){
  string s;
  for(int j=0;j<n;j++){
    if(i%2==0) s.insert(0,"0");
    else s.insert(0,"1");
    i/=2;
  }
  return s;
}

bool check(int n, int i){
  string s = binary(n,i);
  int zero=0;
  int c=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
      zero+=1;
      c+=1;
    }
    else{
    zero-=1;
    c-=1;
    }
    if(c<0)return false;
  }
  if(zero==0) return true;
  else return false;
}

int main(){
  int n,i;
  cin>>n;
  for(i=0;i<pow(2,n);i++){
    if (check(n,i)==true){
      string s=binary(n,i);
      for(int j=0;j<s.size();j++){
        if(s[j]=='0')cout<<"(";
        else cout<<")";
      }cout<<endl;
    }
  }
}
