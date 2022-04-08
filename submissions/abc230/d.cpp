#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
    ll n,d;cin>>n>>d;
    vector<pair<ll,ll>>rig(n);
    vector<pair<ll,ll>>lef(n);
    rep(i,n){
        ll l,r;cin>>l>>r;
        rig[i]={r,l};
        lef[i]={l,i};
    }
    sort(rig.begin(),rig.end());
    sort(lef.begin(),lef.end());
    ll w=-2*d,ans=0;
    for(int i=0;i<n;i++){
        if(w+d-1<rig[i].second){
            w=rig[i].first;
            ans++;
        }
    }
    cout<<ans<<endl;
}
