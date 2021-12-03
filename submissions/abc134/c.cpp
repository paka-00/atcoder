#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;cin>>n;
  long long a[n];
  int i;
  for(i=0;i<n;i++)cin>>a[i];
  long long l[n],r[n];
  l[0]=0;r[n-1]=0;
  for(i=1;i<n;i++)l[i]=max(l[i-1],a[i-1]);
  for(i=n-2;i>=0;i--)r[i]=max(r[i+1],a[i+1]);
  for(i=0;i<n;i++)cout<<max(l[i],r[i])<<endl;
  }
