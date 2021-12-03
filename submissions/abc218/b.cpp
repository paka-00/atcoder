#include<iostream>
#include<string>

using namespace std;

int main(){
  int num[27];
  int i;
  for(i=0;i<26;i++)cin>>num[i];
  for(int i=0;i<26;i++){
    cout<<char('a'+num[i]-1);
  }
}
