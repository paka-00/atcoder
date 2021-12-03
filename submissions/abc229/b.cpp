#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
  unsigned long long a,b;
  cin>>a>>b;
  while(a>0&&b>0){
    if((a%10)+(b%10)>=10){cout<<"Hard"<<endl;return 0;}
    a/=10;
    b/=10;
  }
  cout<<"Easy"<<endl;
}

