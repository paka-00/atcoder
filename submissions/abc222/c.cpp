#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int judge(int a,int b){
  if(a==b)return -1;
  else if((a+1)%3==b)return 0;
  else return 1;
}

int main(){
  int n,i,j,m;
  
  cin>>n>>m;
  int a[2*n][m];
  char t;
  vector<pair<int,int>> b;
  for(i=0;i<2*n;i++) b.push_back({0,i});
  
  for(i=0;i<2*n;i++){
    for(j=0;j<m;j++){
      cin>>t;
      if(t=='G')a[i][j]=0;
      if(t=='C')a[i][j]=1;
      if(t=='P')a[i][j]=2;
    }
  }
  //for(int l=0;l<2*n;l++){cout<<"("<<b[l].first<<" ,"<<b[l].second<<") ";}cout<<endl;
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      int temp=judge(a[b[2*j].second][i],a[b[2*j+1].second][i]);//cout<<temp;
      if(temp!=-1){
        b[2*j+temp].first-=1;
      }
    }
    sort(b.begin(),b.end());
    //for(int l=0;l<2*n;l++){cout<<"("<<b[l].first<<" ,"<<b[l].second<<") ";}cout<<endl;
  }
    for(int l=0;l<2*n;l++)cout<<b[l].second+1<<endl;
}
