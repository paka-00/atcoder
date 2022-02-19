#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll a,b,c;
    cin>>a>>b>>c;ll t=c;
    for(ll i=1;i<b;i++){
        c*=t;
    }
    if(a<c)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}