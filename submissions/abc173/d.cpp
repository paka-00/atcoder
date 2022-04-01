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
    rep(i,n)cin>>a[i];
    sort(a.begin(),a.end(),greater<ll>());
    deque<ll>q;
    ll ans=a[0];
    q.push_back(a[0]);
    for(int i=0;i<n-2;i++){
        ans+=a[i/2+1];
    }
    cout<<ans<<endl;
}
