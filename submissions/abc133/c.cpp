#include <bits/stdc++.h>
#include <cassert>

template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
 
using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using ld=long double;
using pll =pair<ll,ll>;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define ssort(a) sort(a.begin(),a.end());
#define gsort(a) sort(a.begin(),a.end(),greater<ll>());
const ll mod=1000000007;

int main(){
    ll l,r;cin>>l>>r;
    ll ans=LONG_LONG_MAX;

    for(ll i=l;i<=r;i++){
        for(ll j=i+1;j<=r;j++){
            chmin(ans,(ll)(i*j)%2019);
            if(ans==0){cout<<0<<endl;return 0;}
        }
    }
    cout<<ans<<endl;
}

