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
    ll n,k;cin>>n>>k;
    ll m=pow(n,3);
    ll d=0;
    d++;
    d+=3*(n-1);
    d+=6*(k-1)*(n-k);
    ld ans=(ld)d/ld(m);
    cout<<setprecision(18)<<ans<<endl;
}

