#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using namespace std;

int main(){
  long n;cin>>n;
  long a,b,c;
  long long ans=0;
  for(a=1;a*a*a<=n;a++){
      for(b=a;a*b*b<=n;b++){
        ans+=n/a/b-(b-1);
      }
  }
  cout<<ans<<endl;
}

