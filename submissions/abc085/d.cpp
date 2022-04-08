#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    ll n,h;cin>>n>>h;
    vector<ll>a,b;
    ll m=0;
    rep(i,n){
        ll t,k;cin>>t>>k;
        if(m<t)m=t;
        b.push_back(k);
    }
    ll ans=0;
    rep(i,n){
        if(b[i]>m){
            a.push_back(b[i]);
        }
    }
    sort(a.begin(),a.end(),greater<ll>());
    rep(i,a.size()){
        h-=a[i];
        ans++;
        if(h<=0){cout<<ans<<endl;return 0;}
    }
    cout<<(h+m-1)/m+ans<<endl;
}

