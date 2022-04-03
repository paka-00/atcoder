#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

vector<ll>dp(100001);
vector<vector<ll>>g(100001);
vector<bool>used(100001);
ll f(ll x){
    if(used[x])return dp[x];
    used[x]=true;
    ll t=0;
    for(auto v:g[x]){
        t=max(t,f(v)+1);
    }
    return dp[x]=t;
}
int main(){
   ll n,m;cin>>n>>m;
   
   rep(i,m){
       ll x,y;cin>>x>>y;
       g[x].push_back(y);
   }
   
   
   ll ans=0;
   for(ll i=1;i<=n;i++){
       ans=max(ans,f(i));
   }
   cout<<ans<<endl;
}
