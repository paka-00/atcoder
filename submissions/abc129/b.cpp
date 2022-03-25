#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
int main(){
    ll n;cin>>n;
    ll l,r;cin>>l>>r;cout<<0<<endl;
    rep(i,n-1){
        ll nl,nr;cin>>nl>>nr;
        l=max(nl,l);
        r=min(nr,r);
        if(l<=r)cout<<0<<endl;
        else if(r<l){
            ll m=(l+r)/2;
            cout<<max(l-m,m-r)<<endl;
            }
    }
    return 0;
}
