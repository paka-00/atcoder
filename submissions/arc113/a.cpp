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
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
#define ssort(a)sort(a.begin(),a.end());
const ll mod=1000000007;

int main(){
    ll k;cin>>k;
    ll ans=0;
    for(ll i=1;i<=k;i++){
        ll t=k/i;
        for(ll j=1;j<=t;j++){
            ll tmp=t/j;
            ans+=tmp;
        }
    }
    cout<<ans<<endl;
}

