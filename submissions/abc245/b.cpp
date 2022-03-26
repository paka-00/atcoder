#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    vector<bool>a(2001);
    rep(i,n){
        ll t;cin>>t;
        a[t]=true;
    }
    for(int i=0;i<=2000;i++){
        if(!a[i]){
            cout<<i<<endl;
            return 0;
        }
    }
    
}
