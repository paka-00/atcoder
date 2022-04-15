#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

vector<ll> m={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

int main(){
    ll n;cin>>n;
    vector<ll>x(n);rep(i,n)cin>>x[i];
    ll ans=LONG_LONG_MAX;
    for(ll bit=0;bit<(1<<15);bit++){
        ll y=1;
        for(int i=0;i<m.size();i++){
            if(bit&(1<<i))y*=m[i];
        }
        bool isok=true;
        for(int i=0;i<n;i++){
            if(__gcd(x[i],y)==1)isok=false;
        }
        if(isok)ans=min(ans,y);
    }
    cout<<ans<<endl;
}

