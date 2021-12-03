#include<iostream>

using namespace std;
int main(){
	int n;
  	cin>>n;
	int A;
  	int b;
  int i;
  int num=0;
  for(i=0;i<n;i++){
    cin>>A;
    b=b|A;
  	}
  while((b&1)==0){b=b>>1;num++;}
  cout<<num;
}
