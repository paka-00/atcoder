#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    ll n,k,x;cin>>n>>k>>x;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    ll i;
    sort(a.begin(),a.end(),greater<ll>());
    for(i=0;i<n;i++){
        if(k>0){
            ll t=min(a[i]/x,k);
            a[i]-=t*x;
            k-=t;
            
        }
        
    }
    sort(a.begin(),a.end(),greater<ll>());
    if(k>0){
        for(i=0;i<n;i++){
            if(k>0)
                a[i]=max((ll)0,a[i]-x);
                k--;
        }
    }
    ll ans=0;
    for(auto v:a)ans+=v;
    cout<<ans<<endl;
}
