#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll n,p,q;cin>>n>>p>>q;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    
    ll ans=0;
    int a1,a2,a3,a4,a5;
    for(a1=0;a1<n;a1++){
        for(a2=a1+1;a2<n;a2++){
            for(a3=a2+1;a3<n;a3++){
                for(a4=a3+1;a4<n;a4++){
                    for(a5=a4+1;a5<n;a5++){
                        if(((a[a1]*a[a2]%p*a[a3])%p*a[a4]%p*a[a5])%p==q) ans++;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
} 

