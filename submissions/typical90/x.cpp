#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  long long dif=0LL;
  vector<int> a;
  int i,b;
  for(i=0;i<n;i++){
    cin>>b;a.push_back(b);
  }
  for(i=0;i<n;i++){
    cin>>b;
    dif+=abs(a[i]-b);
  }
  if(dif>k){cout<<"No";return 0;}
  if((k-dif)%2==1){cout<<"No";return 0;}
  else cout<<"Yes";
}
