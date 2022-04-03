#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

ll f(ll x,ll y){
    return(x+y)*(x*x+y*y);
}
int main(){
    ll n;cin>>n;
    ll q=1000000;
    ll ans=LLONG_MAX;
    ll y=q;
    for(ll x=0;x<q;x++){
        while(f(x,y)>=n&&y>=0){
            ans=min(ans,f(x,y));
            y--;
        }
    }
    cout<<ans<<endl;
}
