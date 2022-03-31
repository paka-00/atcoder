#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
vector<ll>ans(201001);
ll n,q;
vector<vector<ll>>g(201001);
vector<bool>used(201001);
void dfs(int t){
    used[t]=true;
    for(auto v:g[t]){
        if(!used[v]){
            ans[v]+=ans[t];
            dfs(v);
        }
    }
}

int main(){
    cin>>n>>q;
    for(int i=1;i<n;i++){
        int a,b;cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    rep(i,q){
        int p,x;cin>>p>>x;
        ans[p]+=x;
    }
    dfs(1);
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";cout<<endl;
     

}
