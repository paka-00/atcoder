#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n,q;cin>>n>>q;
  int i,j;
  int s,x,y;
  int t;
  vector<pair<int,int>> a(n+1);
  for(i=1;i<=n;i++){a[i].first=i;a[i].second=0;}
  for(i=0;i<q;i++){
    cin>>s>>x;
    if(s==1){
      cin>>y;
      a[x].second=y;
      a[y].first=x;
    }
    else if(s==2){
      cin>>y;
      a[x].second=0;
      a[y].first=y;
    }
    else{
      t=a[x].first;
      while(t!=a[t].first){t=a[t].first;}
      vector<int> ans;
  	  ans.push_back(t);
      t=a[t].second;
      while(t!=0){ans.push_back(t);t=a[t].second;}
      cout<<ans.size()<<" ";
      for(j=0;j<ans.size();j++)cout<<ans[j]<<" ";
      cout<<endl;ans.clear();
    }
  }
}
