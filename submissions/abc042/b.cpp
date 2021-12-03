#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,l,i;
  cin>>n>>l;
  string s;
  string ans;
  vector<string>w;
  for(i=0;i<n;i++){
    cin>>s;
    w.push_back(s);
  }
  sort(w.begin(),w.end());
  for(i=0;i<n;i++){
    for(int j=0;j<l;j++)cout<<w[i][j];
  }cout<<endl;
  
}

