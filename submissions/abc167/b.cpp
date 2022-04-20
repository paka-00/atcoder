#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    ll a,b,c,k;cin>>a>>b>>c>>k;
    ll ans=0;
    ans+=min(a,k);
    k-=a;
    if(k>0)k-=b;
    if(k>0)ans-=k;
    cout<<ans<<endl;
}