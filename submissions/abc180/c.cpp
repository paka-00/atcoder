#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    ll n;cin>>n;
    set<ll> ans;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            ans.insert(i);
            ans.insert(n/i);
        }
    }
    for(auto v:ans)cout<<v<<endl;
}