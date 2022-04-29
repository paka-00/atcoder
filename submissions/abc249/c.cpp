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
    ll n,k;cin>>n>>k;
    vector<string> s(n);
    rep(i,n){
        string str;cin>>str;
        s[i]=str;
    }
    int m=0;
    for(int bit=0;bit<(1<<n);bit++){
        int ans=0;
        vector<int>z(26,0);
        for(int i=0;i<n;i++){
            if(bit & (1<<i)){
                for(auto v:s[i]){
                    z[v-'a']++;
                }
            }
        }
        for(auto v:z)if(v==k)ans++;
        m=max(ans,m);
    }cout<<m<<endl;
}