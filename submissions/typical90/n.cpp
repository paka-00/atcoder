#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n,i,s;
  cin>>n;
  vector<int> a;
  for(i=0;i<n;i++){
  	cin>>s;
    a.push_back(s);
  }
  sort(a.begin(),a.end());
  vector<int> b;
  for(i=0;i<n;i++){
  	cin>>s;
    b.push_back(s);
  }
  sort(b.begin(),b.end());
  long int ans=0;
  for (i=0;i<n;i++)ans+=abs(a[i]-b[i]);
  cout<<ans;
}
