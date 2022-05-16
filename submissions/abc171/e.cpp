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
    ll n;cin>>n;vl a(n);rep(i,n)cin>>a[i];
    ll s=a[0];
    rep(i,n-1)s^=a[i+1];
    rep(i,n){
        auto k=s^a[i];
        cout<< k<<" ";
    }cout<<endl;
}
