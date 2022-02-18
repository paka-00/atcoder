#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll A=min(a,min(b,c));
    ll C=max(a,max(b,c));
    ll B=a+b+c-A-C;
    ll i,j,k;
    ll ans=10000;
    for(i=0;i<=n/C;i++){
        k=n-C*i;
        for(j=0;j<=k/B;j++){
            if((k-B*j)%A==0){
                int na=(k-B*j)/A;
                    ans=min(i+j+na,ans);
            }
            
        }
    }
    cout<<ans<<endl;
}