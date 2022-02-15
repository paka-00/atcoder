#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
vector<vector<int>> g(100000+1,vector<int>());
vector<int>dist(100000+1);
vector<bool>root(100000+1);


void dfs(int now){
    root[now]=true;
    for(auto v:g[now]){
        if(!root[v]){
            dist[v]=dist[now]+1;
            dfs(v);
        }
    }
}
int main(){
    int n;cin>>n;
    
    root.assign(n+1,false);
    int i,a,b;
    
    rep(i,n-1){
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int t;
    dfs(1);
    int ans=0;
    int m=0;
    for(int i=1;i<=n;i++){
        if(m<dist[i]){
            t=i;
            m=dist[i];
        }
    }
    root.assign(n+1,false);
    dist.assign(n+1,0);
    dfs(t);
    for(int i=1;i<=n;i++){
        chmax(ans,dist[i]);
    }
    cout<<ans+1<<endl;
    

}