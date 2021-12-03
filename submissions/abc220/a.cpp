#include<iostream>
using namespace std;
int main(){
  int a,b,c,i;
  cin>>a>>b>>c;
  for(i=a;i<=b;i++){
    if(i%c==0){
      cout<<i<<endl;
      return 0;
    }
  }
  cout<<-1<<endl;
}
