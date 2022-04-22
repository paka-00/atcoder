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
    ll maxl=0,minr=n;
    rep(i,m){
        ll l,r;cin>>l>>r;
        maxl=max(maxl,l);
        minr=min(minr,r);
    }
    cout<<max((ll)0,minr-maxl+1)<<endl;
}