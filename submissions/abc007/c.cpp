#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
ll r,c;
ll sy,sx,gy,gx;
vector<string>s;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
vector<vector<int>> cost(51,vector<int>(51,10000));
deque<pair<int,int>>q;
vector<vector<bool>> used(51,vector<bool>(51));
void bfs(int x,int y){
    
    q.pop_back();
    
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>=0&&nx<r&&ny>=0&&ny<c&&s[nx][ny]!='#'&&!used[nx][ny]){
            q.push_front({nx,ny});
            
            cost[nx][ny]=cost[x][y]+1;
            used[nx][ny]=true;
            if(nx==gx&&ny==gy)q.clear();
            
        }
    }
}

int main(){
    cin>>r>>c;
    cin>>sx>>sy>>gx>>gy;sy--;sx--;gy--;gx--;
    rep(i,r){
        string str;cin>>str;
        s.push_back(str);
    }
    cost[sx][sy]=0;
    used[sx][sy]=true;
    q.push_front({sx,sy});
    while(!q.empty()){
        int x=q.back().first,y=q.back().second;
        bfs(x,y);
    }
    cout<<cost[gx][gy]<<endl;
    return 0;
}
