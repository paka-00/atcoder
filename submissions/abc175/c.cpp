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
    ll x,k,d;cin>>x>>k>>d;
    ll t=min(k,abs(x)/d);
    if(x>0)x-=d*t;
    else x+=d*t;
    k-=t;
    if(k%2==0)cout<<abs(x)<<endl;
    else cout<<abs(abs(x)-d)<<endl;
}

