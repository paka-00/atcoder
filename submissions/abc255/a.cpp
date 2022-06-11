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
    ll r,c;cin>>r>>c;
    vvl a(2);
    rep(i,2){ll t;cin>>t;a[0].push_back(t);}
    rep(i,2){ll t;cin>>t;a[1].push_back(t);}
    cout<<a[r-1][c-1]<<endl;
    
}

