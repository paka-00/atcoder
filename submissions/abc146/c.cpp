#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int digit(ll n){
    return to_string(n).size();
}

bool isok(ll a,ll b,ll n,ll x){
    if(a*n+b*digit(n)<=x)return true;
    else return false;
}

int main(){
    ll a,b,x;cin>>a>>b>>x;
    ll ans=0;
    ll l=0,r=min(x,(ll)1000000000);
    ll pl=r,pr=l;
    while(l!=pl||r!=pr){
        pl=l;pr=r;
        if(isok(a,b,(l+r)/2,x)){
            l=(l+r)/2;
        }
        else r=(l+r)/2;
    }
    if(isok(a,b,r,x))cout<<r<<endl;
    else cout<<l<<endl;
}
