#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll x,y;
    cin>>x>>y;
    ll ans=1;
    ll a=x;
    while(a*2<=y){
        a*=2;
        ans++;
    }
    cout<<ans<<endl;
    }