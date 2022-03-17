#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = unsigned long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n,w;cin>>n>>w;
    ll m=200010;
    vector<ll>T(m);
    ll e=0;
    for(ll i=1;i<=n;i++){
        ll s,t,p;cin>>s>>t>>p;
        T[s]+=p;
        T[t]-=p;
        e=max(e,t);
    }
    
    bool isok=true;
    if(T[0]>w)isok=false;
    for(ll i=0;i<=e;i++){
        if(i>0)T[i]+=T[i-1];
        if(T[i]>w)isok=false;
    }
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;    
}
