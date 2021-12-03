#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;cin>>s;
  int c=0;
  int n=s.size();
  string m=s;string M=s;
  for(int i=1;i<n;i++){
    string t=s;
    for(int j=0;j<n;j++)t[j]=s[(j+i)%n];
    int c=0;int k=0;
   	for(int j=0;j<n;j++){
      if(t[j]<m[j]){c=1;break;}
      else if(t[j]>m[j])break;
    }for(int j=0;j<n;j++){
      if(t[j]>M[j]){k=1;break;}
      else if(t[j]<M[j])break;
    }
    if(c==1){for(int j=0;j<n;j++)m[j]=t[j];c=0;}
    else if(k==1){for(int j=0;j<n;j++)M[j]=t[j];k=0;}
    
  }
  for(int j=0;j<n;j++)cout<<m[j];
  cout<<endl;
  for(int j=0;j<n;j++)cout<<M[j];
  
}
