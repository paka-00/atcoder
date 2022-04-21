#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    ll n,m;cin>>n>>m;
    vvl c(n+1);
    rep(i,m){
        ll a,b;cin>>a>>b;
        c[a].push_back(b);
        c[b].push_back(a);
    }
    vl d(n+1);
    queue<ll> q;
    vector<bool>used(n+1);
    q.push(1);
    ll dist=1;
    used[1]=true;
    vl dp(n+1);
    dp[1]=1;
    while(!q.empty()){
        ll now=q.front();
        q.pop();
        for(auto v:c[now]){
            if(!used[v]){
                q.push(v);
                used[v]=true;
                d[v]=d[now]+1;
            }
            if(d[v]==d[now]+1){
                dp[v]=(dp[now]+dp[v])%mod;
            }
        }
        
    }
    
    cout<<dp[n]<<endl;

}