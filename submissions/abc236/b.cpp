#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    vector<ll>a(n);
    rep(i,4*n-1){
        ll t;cin>>t;
        a[t-1]++;
    }
    auto it=find(a.begin(),a.end(),3);
    cout<<distance(a.begin(),it)+1<<endl;
}   

