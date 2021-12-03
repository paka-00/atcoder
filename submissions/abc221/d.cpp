#include<iostream>
#include<string>
#include<algorithm>
#include <utility>

using namespace std;

int main(){
  int n;cin>>n;
  vector<pair<int ,int>>x;
  int a,b;
  int i,j,c;
  int d[n+1];
  d[n]=0;
  for(i=0;i<n;i++){
    d[i]=0;
    cin>>a>>b;
    x.push_back({a,1});
    x.push_back({a+b,-1}); 
  }
  sort(x.begin(), x.end());
  c=0;j=0;
  for(i=0;i<x.size();i++){
   c+=x[i].second;
   d[c]+=x[i+1].first-x[i].first;
  }
  for(i=0;i<n-1;i++){cout<<d[i+1]<<" ";}cout<<d[n];
  
}
