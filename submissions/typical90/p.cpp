#include<iostream>
#include<vector>

using namespace std;

int main(){
  long int n,a,b,c;
  cin>>n>>a>>b>>c;
  int i,j,l;
  int min=10000;
  for(i=0;i<10000;i++){
    if(a*i>n)break;
  	for(j=0;j<10000;j++){
      if(a*i+b*j>n)break;
      if((n-(a*i+j*b))%c==0){
      	l=(n-(a*i+j*b))/c;
        if(i+j+l<min)min=i+j+l;
      }
    }
  }
  cout<<min;
}
