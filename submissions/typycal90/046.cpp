#include <bits/stdc++.h>
using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll n;cin>>n;
    vector<ll>a(46),b(46),c(46);
    rep(i,n){
        ll t;cin>>t;t%=46;
        a[t]++;
    }
    rep(i,n){
        ll t;cin>>t;t%=46;
        b[t]++;
    }
    rep(i,n){
        ll t;cin>>t;t%=46;
        c[t]++;
    }
    ll ans=0;
    rep(i,46){
        rep(j,46){
            ans+=a[i]*b[j]*c[(46-i-j+46)%46];
        }
    }
    cout<<ans<<endl;
}


