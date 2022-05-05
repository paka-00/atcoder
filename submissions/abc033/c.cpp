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
    string s;
    cin>>s;
    ll ans=0;
    bool iszero=false;
    for(auto v:s){
        if(v=='0')iszero=true;
        else if(v=='+'){
            if(!iszero)ans++;
            iszero=false;
        }
    }
    if(!iszero)ans++;
    cout<<ans<<endl;
}