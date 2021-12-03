#include <bits/stdc++.h>
using namespace std;

int main(){
  unsigned long  n;cin>>n;
  int k;cin>>k;
  string s=to_string(n);
  for(int i=0;i<k;i++){
    if(n%200==0){n=n/200;s=to_string(n);}
    else{s+="200";n=1000*n+200;}
  }
  cout<<n<<endl;return 0;
}
