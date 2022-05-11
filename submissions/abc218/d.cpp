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
    set<pair<ll,ll>>b;
    rep(i,n){
        ll x,y;cin>>x>>y;
        a[i]={x,y};
        b.insert({x,y});
    }
    ll ans=0;
    rep(i,n){
        for(ll j=i+1;j<n;j++){
            ll x1=a[i].first,y1=a[i].second;
            ll x2=a[j].first,y2=a[j].second;
            if(x1==x2||y1==y2)continue;
            if(b.find({x1,y2})!=b.end()&&b.find({x2,y1})!=b.end()){
                ans++;
                
            }
        }
    }
    cout<<ans/2<<endl;
    
}
