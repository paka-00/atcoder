#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;
using namespace atcoder;
using mint = modint998244353;
int main(){
  int n,i,j;
  cin>>n;
  long long a[n+1];
  for(i=0;i<n;i++)cin>>a[i];
  mint A[n+1][10];
   for(i=0;i<n;i++){
    for(j=0;j<10;j++)A[i][j]=0;
   }
  for(i=0;i<10;i++){
    if(a[0]==i)A[0][i]=1;
    else A[0][i]=0;
  }
  for(i=0;i<n-1;i++){
    for(j=0;j<10;j++){
      A[i+1][(j+a[i+1])%10]+=A[i][j];
      A[i+1][(j*a[i+1])%10]+=A[i][j];
    }
  }
    for(j=0;j<10;j++){
      cout<<A[n-1][j].val()<<endl;
    }
  
}
