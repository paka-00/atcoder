#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  int a,b;
  int ans[n+1];
  int i,j;
  for(i=0;i<n+1;i++)ans[i]=-1;
  int temp;
  cin>>temp>>j;
  cin>>a>>b;
  int c;
  if(temp==a){c=a;ans[j]=0;ans[b]=0;}
  else if(temp==b){c=b;ans[j]=0;ans[a]=0;}
  else if(j==a){c=a;ans[temp]=0;ans[b]=0;}
  else if(j==b){c=b;ans[temp]=0;ans[a]=0;}
  else {cout<<"No";return 0;}
  for(i=2;i<n-1;i++){
    cin>>a>>b;
    if(a==c)ans[b]=0;
    else if(b==c)ans[a]=0;
    else{cout<<"No";return 0;}
  }
  for(i=1;i<=n;i++){
      if(i!=c&&ans[i]!=0){cout<<"No";return 0;}
  }cout<<"Yes";
}
