#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k,a;cin>>n>>k>>a;
  int i;
  int ans=a-1;
  for(i=0;i<k;i++){
    ans=(ans+1)%n;
    
  }
  if(ans==0)cout<<n<<endl;
  else cout<<ans<<endl;
}
