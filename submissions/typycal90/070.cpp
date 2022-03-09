#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll n;cin>>n;
    vector<ll>x(n),y(n);
    rep(i,n)
        cin>>x[i]>>y[i];
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    ll ans=0;
    ll mx,my;
    if(n%2==0){
        mx=(x[n/2]+x[(n/2)-1])/2;
        my=(y[n/2]+y[(n/2)-1])/2;
    }
    else{
        mx=x[n/2];
        my=y[n/2];
    }
    rep(i,n){
        ans+=labs(x[i]-mx)+labs(y[i]-my);
    }
    cout<<ans<<endl;
}