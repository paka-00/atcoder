#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    ll i,s=sqrt(n),ans=n;
    for(i=1;i<=s;i++){
        for(ll j=1;j<=n/i;j++){
            chmin(ans,abs(i-j)+n-i*j);
        }
    }
    cout<<ans<<endl;
}

