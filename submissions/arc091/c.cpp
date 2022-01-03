#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=unsigned long long;

int main(){
    ll n,m;cin>>n>>m;
    ll tmp=max(n,m);
    ll t=min(n,m);
    n=tmp;
    m=t;
    ll ans;
    if(m==1){
        if(n==1)cout<<1<<endl;
        else cout<<n-2<<endl;
    }
    else{
        ans=(n-2)*(m-2);
        cout<<ans<<endl;
    }
}