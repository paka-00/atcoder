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
    ll n,x,y;cin>>n>>x>>y;
    vl ans(n);
    for(ll i=1;i<=n;i++){
        for(ll j=i+1;j<=n;j++){
            ll k=LONG_LONG_MAX;
            k=min(k,j-i);
            k=min(k,abs(x-i)+abs(y-j)+1);
            ans[k]++;
        }
    }
    for(ll i=1;i<n;i++)cout<<ans[i]<<endl;
}