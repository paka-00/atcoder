#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    vector<ll> a(n+1);
    vector<ll> b(n);
    rep(i,n)cin>>a[i];
    rep(i,n-1){
        if(a[i]>a[i+1]){
            b[i]^=1;b[i+1]^=1;
        }
    }
    for(auto v:b)cout<<v<<" ";
    cout<<endl;
}

