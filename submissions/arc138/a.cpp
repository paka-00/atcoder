#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    ll n,k;cin>>n>>k;
    vector<pair<ll,ll>>a(n);
    vector<int>b(n);
    ll s;
    rep(i,n){
        ll t;cin>>t;  
        a[i]={t,-i};
        b[i]=t;
    }
    sort(a.begin(),a.end());
    ll ans=LONG_LONG_MAX;
    ll c=LONG_LONG_MIN;
    ll t=0;
    for(ll i=0;i<n;i++){
        ll p=-a[i].second;
        
        if(p>=k){
            if(b[c]<a[i].first)
                ans=min(ans,p-c);
        }
        else c=max(c,p);

    }
    if(ans==LONG_LONG_MAX)ans=-1;
    
cout<<ans<<endl;
}

