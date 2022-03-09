#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll n,q;cin>>n>>q;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];

    vector<ll> ans(n);
    ll sum=0;
    for(ll i=0;i<n-1;i++){
        ans[i]=a[i+1]-a[i];
        sum+=labs(ans[i]);
    }
    for(ll i=0;i<q;i++){
        ll l,r,v;cin>>l>>r>>v;
        if(l>1){
            sum-=labs(ans[l-2]);
            ans[l-2]+=v;
            sum+=labs(ans[l-2]);
        }
        if(r<n){
            sum-=labs(ans[r-1]);
            ans[r-1]-=v;
            sum+=labs(ans[r-1]);
        }
        
        cout<<sum<<endl;
    }
}