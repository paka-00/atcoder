#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
    ll n;cin>>n;
    vector<pair<ll,ll>>a(n);
    ll max_x=0,min_x=10000000010;
    rep(i,n){
        ll x,l;cin>>x>>l;
        a[i]={x-l,x+l};
    }
    sort(a.begin(), a.end(), [](const auto& lhs, const auto& rhs) {
    return lhs.second < rhs.second;
    });
    ll ans=0,right=-10000000010;
    for(int i=0;i<n;i++){
        if(a[i].first>=right){
            ans++;
            right=a[i].second;

        }
        
    }
    cout<<ans<<endl;
}