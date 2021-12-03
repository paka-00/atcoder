#include <bits/stdc++.h>
using namespace std;


int main(){
  int i,j;
  int n;cin>>n;
  int x,y;
  vector<pair<int,int>> z;
  for(i=0;i<n;i++){
    cin>>x>>y;
    z.push_back({x,y});
  }
  int X,Y;
  set<pair<int,int>>ans;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(i!=j){
        //z[i],z[j]‚Ì”äŠr
        X=(z[j].first-z[i].first);
        Y=(z[j].second-z[i].second);      
        int d=gcd(X,Y);
        if(d!=0){X/=d;Y/=d;}
        ans.insert({X,Y});
      }
    }
  }
  
  cout<<ans.size()<<endl;
}

