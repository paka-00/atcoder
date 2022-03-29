#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

vector<queue<ll>>g(100001);
queue<ll>q;
vector<ll>ans(100001);
ll  n,m;
set<ll>used;
bool isok=true;

void bfs(ll  p){
    while(!g[p].empty()){
        if(used.find(g[p].front())==used.end()){
            q.push(g[p].front());
            used.insert(g[p].front());
            ans[g[p].front()]=p;
        }
        g[p].pop();
        
    }
}
int main(){
    cin>>n>>m;
    for(ll  i=0;i<m;i++){
        ll  a,b;cin>>a>>b;
        g[a].push(b);
        g[b].push(a);
    }
    ans[1]=0;
    q.push(1);
    used.insert(1);
    while(!q.empty()){
        bfs(q.front());
        q.pop();
    }
    if(used.size()==n){
        cout<<"Yes"<<endl;
        for(ll  i=2;i<=n;i++)cout<<ans[i]<<endl;
    }
    else cout<<"No"<<endl;
}
