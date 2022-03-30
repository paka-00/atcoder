#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    vector<ll>a(n);
    ll m=0;
    rep(i,n){
        cin>>a[i];
        m=max(m,a[i]);
    }
    ll t=(m+1)/2,ans,tmp=m;
    rep(i,n){
        //tに最も近いもの
        if(a[i]!=m)
        if(tmp>labs(a[i]-t)){
            ans=a[i];
            tmp=labs(a[i]-t);
        }
    }
    cout<<m<<" "<<ans<<endl;
}
