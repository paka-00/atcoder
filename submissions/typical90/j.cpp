#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n,i,q;
  cin>>n;
  int a[100001];
  int b[100001];
  int c[100001],p[100001];
  for(i=1;i<n+1;i++)cin>>c[i]>>p[i];
  cin>>q;
  int l[100001],r[100001];
  for(i=1;i<q+1;i++)cin>>l[i]>>r[i];
  for(i=1;i<n+1;i++){
  	a[i]=a[i-1];
    b[i]=b[i-1];
    if(c[i]==1)a[i]+=p[i];
    else b[i]+=p[i];
  }
  for(i=1;i<q+1;i++)cout<<a[r[i]]-a[l[i]-1]<<" "<<b[r[i]]-b[l[i]-1]<<endl;
}
