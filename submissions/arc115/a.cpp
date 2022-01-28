#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n,m;cin>>n>>m;
    vector<string>s(n);
    rep(i,n)cin>>s[i];
    ll even=0,odd=0;
    rep(i,n){
        int temp=0;
        for(auto v:s[i]){
            if(v-'0')temp^=1;
        }
        if(temp)even++;
        else odd++;
    }
    cout<<even*odd<<endl;

}

