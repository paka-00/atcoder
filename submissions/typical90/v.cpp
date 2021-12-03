#include<iostream>
using namespace std;
long long gcd(long long n,long long m){//n>m
  if(m!=0LL) {
  return gcd(m,n%m);
  }
  else return n;
}

int main(){
  long long  a,b,c;
  cin>>a>>b>>c;
  long long d=gcd(a,b);
  long long g=gcd(d,c);
  cout<<a/g+b/g+c/g-3<<endl;
  return 0;
}
