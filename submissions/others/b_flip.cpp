#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n,m,k;cin>>n>>m>>k;
    bool isok=false;
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=m;j++){
            if((i*(m-j))+(j*(n-i))==k)isok=true;
        }
    }
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
