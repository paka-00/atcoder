#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
ll tyouhuku(ll n,ll k){
    ll ans=1;
    n-=k;
    while(n>0){
        ans++;
        n-=k-1;
    }
    return ans;
}

int main(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    
    cout<<tyouhuku(n,k)<<endl;

}
