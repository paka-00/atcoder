#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    vector<ll>a(n+1),b(n+1);
    for(ll i=1;i<=n;i++){
        ll c,q;cin>>c>>q;
        if(c==1){a[i]=a[i-1]+q;b[i]=b[i-1];}
        else{a[i]=a[i-1];b[i]=b[i-1]+q;}
    }
    ll q;cin>>q;
    for(ll i=0;i<q;i++){
        ll l,r;cin>>l>>r;
        cout<<a[r]-a[l-1]<<" "<<b[r]-b[l-1]<<endl;
    }

}