#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    ll n,m;cin>>n>>m;
    ll ans=1;
    if(labs(n-m)>1){
        cout<<0<<endl;
        return 0;
    }
    else if(m>n){
        ll t=m;
        m=n;
        n=t;
    }
    if(n==m)ans=2;
    for(int i=n+m;i>0;i--){
        if(i%2==1){
            ans=(ans*n)%mod;
            n--;
            }
        else{
            ans=(ans*m)%mod;
            m--;
        }
    }
    cout<<ans<<endl;
}
