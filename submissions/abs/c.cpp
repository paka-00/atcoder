#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,y;
  cin>>n>>y;
  y/=1000;
  int i,j,l;
  for(i=0;i<=n;i++){
  	for(j=n-i;j>-1;j--){
      if(10*i+5*(j)+n-i-j==y){cout<<i<<" "<<j<<" "<<n-i-j;return 0;}  
    }
  }
  cout<<"-1 -1 -1";
}
