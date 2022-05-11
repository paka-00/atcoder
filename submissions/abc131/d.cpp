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
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
const ll mod=1000000007;


int main(){
    ll n;cin>>n;
    vector<pll>c(n);
    rep(i,n){
        ll a,b;cin>>a>>b;
        c[i]={b,-a};
    }
    sort(c.begin(),c.end());
    ll t=0;
    bool isok=true;
    rep(i,n){
        
        t+=-c[i].second;

        if(t>c[i].first)isok=false;
    }
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

