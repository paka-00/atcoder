#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n,k;cin>>n>>k;
    ll ans=-1;
    vector<pair<ll,ll>>s;
    rep(i,n){
        ll a,b;cin>>a>>b;
        s.push_back({a,b});
    }
    sort(s.begin(),s.end());
    for(auto v:s){
        k-=v.second;
        if(k<=0&&ans==-1)ans=v.first;
    }
    cout<<ans<<endl;
}
