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

int main(){
    ll n;cin>>n;
    vl a(n);
    map<ll,vl>b;
    map<ll,ll>cnt,c;
    ll ans=0;
    rep(i,n)cin>>a[i];
    rep(i,n){ll t;cin>>t;b[t].push_back(i+1);}
    rep(i,n){ll t;cin>>t;c[t]++;}
    for(auto v:b){
        for(auto w:v.second){
            cnt[v.first]+=c[w];
        }
    }
    rep(i,n){
        ans+=cnt[a[i]];
    }
    cout<<ans<<endl;
}

