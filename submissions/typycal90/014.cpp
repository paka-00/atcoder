#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    vector<ll>a(n),b(n);
    ll i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans=0;
    for(i=0;i<n;i++){
        ans+=abs(a[i]-b[i]);
    }
    cout<<ans<<endl;
}