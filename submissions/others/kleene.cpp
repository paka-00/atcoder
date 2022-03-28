#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
const ll mod=1000000007;
int main(){
    ll n,k;cin>>n>>k;
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    ll in=0,out=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(a[i]>a[j]){
                out=(out+1)%mod;
                if(j>i)in=(in+1)%mod;
            }
        }
    }
    //cout<<in<<" "<<out<<endl;
    ll ans=(k*in)%mod;
    ll t=(k*(k-1))%mod;
    t=(t*500000004)%mod;
    t=(t*out)%mod;
    ans=(ans+t)%mod;
    cout<<ans<<endl;   
}