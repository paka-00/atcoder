#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int n;cin>>n;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    ll ans=10000000000000;
    for(int bit=0;bit<(1<<(n-1));bit++){
        ll left=0,right=0;
        for(int i=0;i<=n;i++){
            if(i<n){
                left|=a[i];
            }
            if(bit&(1<<i)||i==n){
                right^=left;
                left=0;
            }
        }
        //cout<<"r:"<<right<<endl;
        ans=min(ans,right);
    }
    cout<<ans<<endl;
}
