#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

long long gcd(long long a,long long b){
    if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}
long long lcm(long long a,long long b){
  return b/gcd(a,b);
}
int main(){
  long long a,b;cin>>a>>b;
  long long d=1000000000000000000;
  long long c=lcm(a,b);
  if(c>d/a)cout<<"Large";
  else cout<<c*a;
}
