#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)


ll gcd(ll x,ll y){
    if(x<y) swap(x,y);
    //xの方が常に大きい
    ll r;
    while(y>0){
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}


int main(){
    ll n,i;cin>>n;
    vector<ll>a(n);rep(i,n)cin>>a[i];
    ll ans=a[0];
    rep(i,n-1){
        ans=gcd(a[i+1],ans);
    }
    cout<<ans<<endl;
}

