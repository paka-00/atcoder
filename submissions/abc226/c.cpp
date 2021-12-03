#include <bits/stdc++.h>
using namespace std;
 
#define N 200100
#define MOD 998244353
long long t[N];
int k[N];
vector<int>e[N];
vector<bool> used(N);

int main(){
  long long ans=0;
  long long n;cin>>n;
  used.assign(n,false);
  int i,j,x;
  for(i=0;i<n;i++){
    cin>>t[i]>>k[i];
    for(j=0;j<k[i];j++){
      cin>>x;e[i].push_back(x-1);
    }
  }
  used[n-1]=true;
  for(i=n-1;i>=0;i--){
    if(used[i]==true){
      ans+=t[i];
      for(j=0;j<k[i];j++){
        used[e[i][j]]=true;
      }
    }
  }
  cout<<ans<<endl;
}
