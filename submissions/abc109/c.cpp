#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

ll lgcd(ll a, ll b){
  if(a%b == 0){
    return b;
  }else{
    return lgcd(b, a%b);
  }
}

int main(){
    ll n,x;cin>>n>>x;
    ll t;cin>>t;
    ll ans=labs(t-x);
    rep(i,n-1){
        cin>>t;
        ans=lgcd(labs(t-x),ans);
    }
    cout<<ans<<endl;
}