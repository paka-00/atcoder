#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
    ll n,k;cin>>n>>k;
    ll t=0;
    ll ans=0;
    if(k%2==0){
        ll l=k/2;
        t=n/l-n/k;
    }

    ans+=pow(t,3);

    ans+=pow(n/k,3);
    cout<<ans<<endl;
}
