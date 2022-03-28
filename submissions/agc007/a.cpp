#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

vector<vector<bool>>g(10,vector<bool>(10));

int dx[2]={1,0};
int dy[2]={0,1};
int h,w;
bool isok=false;
void dfs(int x,int y,int r,int goal){
    //cout<<x<<","<<y<<"  :"<<r<<endl;
    if(r==goal)isok=true;
    for(int i=0;i<2;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>=0&&nx<h&&ny>=0&&ny<w&&g[nx][ny]){
            dfs(nx,ny,r+1,goal);
        }
    }
}

int main(){
    cin>>h>>w;
    vector<vector<bool>>used(10,vector<bool>(10));
    int sx=-1,sy=-1,gx,gy;
    int r=0;
    rep(i,h){
        rep(j,w){
            char t;cin>>t;
            if(t=='#'){
                g[i][j]=true;
                gx=i;gy=j;
                r++;
                if(sx==-1){sx=i;sy=j;}

            }
            else g[i][j]=false;
        }
    }
    dfs(sx,sy,1,r);
    if(isok)cout<<"Possible"<<endl;
    else cout<<"Impossible"<<endl;
    
}
