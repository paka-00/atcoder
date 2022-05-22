#include <bits/stdc++.h>
#include <cassert>

template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
 
using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using ld=long double;
using pll =pair<ll,ll>;
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
#define ssort(a)sort(a.begin(),a.end());
const ll mod=998244353;

int main(){
    int n;cin>>n;
    vector<string>s(n);
    rep(i,n)cin>>s[i];
    vector<map<char,ll>>m(n);
    vvl p(10,vl(10));
    rep(i,n){
        for(ll j=0;j<10;j++){
            m[i][s[i][j]]=j;
            p[s[i][j]-'0'][j]++;
        }
    }

    
    ll ans=LONG_LONG_MAX;
    for(int i=0;i<10;i++){
        ll tmp=0;ll same=1;
        
        rep(j,10){
            chmax(tmp,10*(p[i][j]-1)+j);
        }
        chmin(ans,tmp);
        
    }cout<<ans<<endl;
}

