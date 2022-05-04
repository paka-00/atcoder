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
    vector<pair<ll,ll>>c(n);
    rep(i,n){
       int a,b;cin>>a>>b;
       c[i]={a,b};
    }
    ll ans=0;
    for(int i=n-1;i>=0;i--){
    ll t=ans;
        ll f=c[i].first,s=c[i].second;
        //ans+=(s-((f+t)%s));
        //f+tをsの倍数にする
        ll tmp=(f+t)%s;
        if(tmp==0)continue;
        else ans+=s-tmp;
    }
    cout<<ans<<endl;
}