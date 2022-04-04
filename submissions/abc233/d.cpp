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
    vector<ll>s(n+1);
    s[0]=0;
    map<ll,ll>m;

    for(int i=1;i<=n;i++){
        s[i]=s[i-1]+a[i-1];
    }
    
    ll ans=0;
    for(int i=1;i<=n;i++){
        m[s[i-1]]++;
        ans+=m[s[i]-k];
    }
    cout<<ans<<endl;
}
