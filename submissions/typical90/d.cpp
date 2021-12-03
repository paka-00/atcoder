#include<iostream>
#include<vector>
using namespace std;
int main(){
  int h,w,i,j;
  cin>>h>>w;
  vector<vector<int>> A(h,vector<int>(w));

  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      cin>>A.at(i).at(j);
    }
  }
  int H[h];
  int W[w];
  for(i=0;i<h;i++)H[i]=0;
  for(j=0;j<w;j++)W[j]=0;
  for(i=0;i<h;i++){
  	for(j=0;j<w;j++){
    H[i]+=A[i][j];
    W[j]+=A[i][j];
    }
  }
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      cout<<H[i]+W[j]-A[i][j]<<" ";
    }cout<<endl;
  }
  
}
