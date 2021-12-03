#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
  int n,p,i,a;
  cin>>n>>p;
  int c=0;
  for(i=0;i<n;i++){
    cin>>a;
    if(a<p)c++;
  }
  cout<<c;
}
