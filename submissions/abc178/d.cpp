#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

const ll mod=1000000007;

int main(){
    int n;cin>>n;
    vector<ll>a(n+1);
    if(n>=3){
        a[1]=0;a[2]=0;a[3]=1;
        for(ll i=4;i<=n;i++){
            a[i]=(a[i-1]+a[i-3])%mod;
        }
        cout<<a[n]<<endl;
    }
    else cout<<0<<endl;
}
