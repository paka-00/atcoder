#include <bits/stdc++.h>
#include <cassert>

template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
 
using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using ld=long double;
using pll =pair<ll,ll>;
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
#define ssort(a)sort(a.begin(),a.end());
#define gsort(a)sort(a.begin(),a.end(),greater<ll>());
const ll mod=998244353;
vector<bool>used(1000000,false);
vector<ll>ans;
vector<set<ll>> m(1000000);

void dfs(int i,int j){
    ans.push_back(i);
    for(auto v:m[i]){
        if(v!=j){
            dfs(v,i);
            ans.push_back(i);
        }
    }
}

int main(){
    ll n;cin>>n;
    rep(i,n-1){
        ll a,b;cin>>a>>b;
        m[a].insert(b);
        m[b].insert(a);
    }
    dfs(1,-1);
    for(auto v:ans)cout<<v<<" ";cout<<endl;
    

}
