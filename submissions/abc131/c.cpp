#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#
using namespace std;
long long gcd(long long a, long long b) {
    if (b==0) return a;
    else return gcd(b, a%b);
}
long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

int main(){
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  long long C=b/c-(a-1)/c;
  long long  D=b/d-(a-1)/d;
  long long cd=b/lcm(c,d)-(a-1)/lcm(c,d);
  cout<<b-a-C-D+cd+1;
  
}
