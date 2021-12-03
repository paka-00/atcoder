#include<iostream>


using namespace std;
int main(){
  int n,i;
  cin>>n;
  long long A[n+1];
  for(i=0;i<n;i++)cin>>A[i];
  long long sum=0;
  for(i=0;i<n;i++)sum+=A[i];
  long long ans=0;
  long long X;
  cin>>X;
  ans+=n*(X/sum);
  long long r=X%sum;
  long long c=0;
  for(i=0;i<n;i++){
    c+=A[i];
    if(c>r){cout<<ans+i+1;return 0;}
  }
  
}
