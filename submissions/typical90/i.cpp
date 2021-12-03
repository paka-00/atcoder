#include <bits/stdc++.h>
using namespace std;



int main(){
  int q;cin>>q;
  int i,j;
  vector<long long>x;
  for(i=0;i<q;i++){
    int t,tmp;cin>>t>>tmp;
    if(t==2)x.push_back(tmp);
    else if(t==1)x.insert(x.begin(),tmp);
    else cout<<x[tmp-1]<<endl;
  }
  
}
