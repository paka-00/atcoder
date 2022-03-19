#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = unsigned long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int n;cin>>n;
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    ll ans=1000;
    for(int i=0;i<n-1;i++){
        ll kabu=0;
        if(a[i]<a[i+1])kabu=ans/a[i];
        ans+=(a[i+1]-a[i])*kabu;
        
    }
    cout<<ans<<endl;
}
