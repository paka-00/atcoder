#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    vector<ll>sum;
    sum.push_back(0);
    for(ll i=0;i<n;i++){
        auto itr=sum.end();
        itr--;
        sum.push_back(*itr+a[i]);
    }
    ll ans=0;
    for(auto it=sum.begin();it!=sum.end();it++){
        //sum[i]+kを探す
        auto itr=lower_bound(it,sum.end(),*it+k);
        ans+=distance(itr,sum.end());
        
    }
    cout<<ans<<endl;
}
