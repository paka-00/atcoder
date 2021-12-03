#include <bits/stdc++.h>
using namespace std;
vector<vector<bool>>seen(1000,vector<bool>(1000));
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
int H,W;
vector<vector<char>>c(1000,vector<char>(1000));

void dfs(int h,int w){
  seen[h][w]=true;
  for(int i=0;i<4;i++){
    int nh=h+dx[i];
    int nw=w+dy[i];
    
    if(nh<0||nw<0||nh>=H||nw>=W){continue;}
    if(c[nh][nw]=='#'||seen[nh][nw]){continue;}
    dfs(nh,nw);
  }
}
int main(){
  cin>>H>>W;
  int i,j;
  
  int sh,sw,gh,gw;
  for(i=0;i<H;i++){
    for(j=0;j<W;j++){
      cin>>c[i][j];
      if(c[i][j]=='s'){sh=i;sw=j;}
      else if(c[i][j]=='g'){gh=i;gw=j;}
      seen[i][j]=false;
    }
  }
  dfs(sh,sw);
  if(seen[gh][gw]){cout<<"Yes"<<endl;return 0;}
  else cout<<"No"<<endl;
}

