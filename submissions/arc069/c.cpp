#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n,m;cin>>n>>m;
    ll ans=0;
    ll t;
    if(n>0){
        t=min(n,m/2);
        ans+=t;
        m-=2*t;
    }
    ans+=m/4;
    cout<<ans<<endl;
}

