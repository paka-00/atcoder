#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)


int main(){
    ll n,q;cin>>n>>q;
    vector<ll>a(n+1);
    for(ll i=1;i<=n;i++)cin>>a[i];
    vector<ll>c(n+1);
    for(ll i=1;i<=n;i++){
        c[i]=a[i]-i;
    }
    rep(i,q){
        ll k;cin>>k;
        if(k>c[n])cout<<a[n]+k-c[n]<<endl;
        else {
            auto cm=lower_bound(c.begin(),c.end(),k);
            int d=abs(distance(cm,c.begin()));
            cout<<a[d]-1+k-c[d]<<endl;
        }
    }
}