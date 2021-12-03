#include<iostream>
#include<string>
#include<cmath>

using namespace std;
int main(){
  int k;
  cin>>k;
  string a,b;
  cin>>a>>b;
  long long A=0;
  long long B=0;
  int i;
  for(i=a.size()-1;i>=0;i--)A+=pow(k,a.size()-i-1)*(a[i]-'0');
  for(i=b.size()-1;i>=0;i--)B+=pow(k,b.size()-i-1)*(b[i]-'0');
  cout<<A*B;
}
