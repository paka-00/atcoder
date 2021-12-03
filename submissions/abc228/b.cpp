#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  int x;cin>>x;
  vector<int> a(n+1);
  for(int i=1;i<=n;i++)cin>>a[i];
  int ans=0;
  vector<bool>b(n+1);
  b.assign(n+1,false);
  b[x]=true;ans++;
  int next=a[x];
  while(b[next]==false){
    b[next]=true;
    ans++;
    next=a[next];
  }
  cout<<ans<<endl;
}

