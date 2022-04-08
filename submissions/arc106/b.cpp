#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
  int i,j,k,l,m;
  int N, L;
  string in[100];
  char buf[1000];

  cin>>N>>L;cin.ignore();
  rep(i,L+1){
    string str;getline(cin,str);
    in[i]=str;
  }

  i = L;
  for(j=0;;j++) if(in[i][j]=='o') break;
  for(;;){
    i--;
    if(j-1>=0 && in[i][j-1]=='-') j-=2;
    else if(in[i][j+1]=='-') j+=2;
    if(i==0) break;
  }

  k = j/2 + 1;
  printf("%d\n",k);

  return 0;
}
