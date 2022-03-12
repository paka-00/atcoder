#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    vector<ll>p(n+1);
    for(ll i=1;i<=n;i++)cin>>p[i];
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(p[i]==i&&i<n){
            swap(p[i],p[i+1]);
            ans++;
        }
        
    }
    if(p[n]==n)ans++;
    cout<<ans<<endl;
}