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
    ll n,m;cin>>n>>m;
    vl a(n),b(m);
    rep(i,n){
        cin>>a[i];
    }
    rep(i,m){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll j=0,i=0;
    ll ans=LONG_LONG_MAX;

    while(i<n&&j<m){
        if(a[i]<b[j]){
            chmin(ans,llabs(a[i]-b[j]));
            i++;
        }
        else{
            chmin(ans,llabs(a[i]-b[j]));
            j++;
        }
    }
    cout<<ans<<endl;

}