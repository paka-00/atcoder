#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using ld=long double;
using pll =pair<ll,ll>;
#define sort(v)sort(v.begin(),v.end())
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
const ll mod=1000000007;


int main(){
    ll n,C;cin>>n>>C;
    ll a,b,c;
    vector<pll>e;
    vl d(n+1);
    rep(i,n){
        cin>>a>>b>>c;
        e.push_back({a,c});
        e.push_back({b+1,-c});
    }
    sort(e);
    ll m=0,t=0;
    ll ans=0;
    for(auto v:e){
        if(v.first!=t){
            ans+=min(C,m)*(v.first-t);
            t=v.first;
        }
        m+=v.second;
    }
    cout<<ans<<endl;        

    
    
}

