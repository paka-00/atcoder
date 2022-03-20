#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    vector<ll>c(n);
    ll taka=0,aoki=0;
    ll ans=0;
    rep(i,n){
        ll a,b;cin>>a>>b;
        c[i]=a+a+b;
        ans-=a;
    }
    sort(c.begin(),c.end(),greater<ll>());
    ll i=0;
    while(ans<=0){
        ans+=c[i];
        i++;
    }
    cout<<i<<endl;
}
