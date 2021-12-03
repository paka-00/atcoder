#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using namespace std;

int main(){
  int n,w,i,j;
  cin>>n>>w;
  unsigned long ans=0;
  vector<pair<long,long>>a(n);
  for(i=0;i<n;i++){
    long A,B;cin>>A>>B;
    a[i]={A,B};
  }
  sort(a.begin(),a.end(),greater<pair<long,long>>());
  int pos=0;
  while(w-a[pos].second>0&&pos<=n){
    ans+=a[pos].first*a[pos].second;
    w-=a[pos].second;
    pos++;
  }
  ans+=a[pos].first*w;
  cout<<ans<<endl;
}

