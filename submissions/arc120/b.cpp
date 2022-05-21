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
const ll mod=998244353;

int main(){
    int h,w;cin>>h>>w;
    vector<string>s(h);
    rep(i,h)cin>>s[i];
    map<ll,vector<char>>vec;
    ll ans=1;
    rep(i,h){
        rep(j,w)
            vec[i+j].push_back(s[i][j]);
    }
    for(auto v:vec){
        int n=v.second.size();
        bool b=false;
        bool r=false;
        for(int i=0;i<n;i++){
            if(v.second[i]=='B')b=true;
            else if(v.second[i]=='R')r=true;
        }
        if(!b&&!r)ans=(ans*2)%mod;
        else if(b&&r)ans=0;
    }
    cout<<ans<<endl;
}

