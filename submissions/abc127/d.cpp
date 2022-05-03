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
    vl a(n);
    map<ll,ll>p;
    rep(i,n){
        cin>>a[i];
        p[a[i]]++;
    }
    vector<pair<ll,ll>>b(m);
    rep(i,m){
        ll t,k;cin>>t>>k;
        b[i]={k,t};
        p[k]+=t;
    }
    auto it=p.end();
    ll cnt=0,ans=0;
    while(it!=p.begin()&&cnt<n){
        it--;
        ans+=it->first*min(n-cnt,it->second);
        cnt+=it->second;
    }
    cout<<ans<<endl;

}