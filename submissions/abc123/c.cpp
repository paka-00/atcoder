#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll n,a,b,c,d,e;
    cin>>n>>a>>b>>c>>d>>e;
    ll ans=0;
    ll m=min(a,min(b,min(c,min(d,e))));
    ans+=(n+m-1)/m+4;
    cout<<ans<<endl;
}

