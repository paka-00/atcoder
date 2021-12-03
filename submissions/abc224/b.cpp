#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w;cin>>h>>w;
  long long a[h][w];
  int i,j;
  for(i=0;i<h;i++){
    for(j=0;j<w;j++)cin>>a[i][j];
  }
  for(int i1=0;i1<h-1;i1++){
    for(int i2=i1+1;i2<h;i2++){
      for(int j1=0;j1<w-1;j1++){
        for(int j2=j1+1;j2<w;j2++){
          if(a[i1][j1]+a[i2][j2]>a[i2][j1]+a[i1][j2]){
            cout<<"No";return 0;
          }
        }
      }
    }
  }
  cout<<"Yes";
}
