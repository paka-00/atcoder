#include <bits/stdc++.h>
#include <cassert>

template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template< typename T >
T mod_pow(T x, T n, const T &p) {
  T ret = 1;
  while(n > 0) {
    if(n & 1) (ret *= x) %= p;
    (x *= x) %= p;
    n >>= 1;
  }
  return ret;
}

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using ld=long double;
using pll =pair<ll,ll>;
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
#define ssort(a)sort(a.begin(),a.end());
const ll mod=1000000007;


int main(){
    ll a,b,c;cin>>a>>b>>c;
    a%=10;
    if(a==0){
        cout<<0<<endl;
        return 0;
    }
    map<ll,vector<ll>> m;
    for(int i=1;i<10;i++){
        set<ll>tmp;
        ll t=i;
        while(tmp.find(t)==tmp.end()){
            m[i].push_back(t);
            tmp.insert(t);
            t*=i;
            t%=10;
        }
    }

    ll k=m[a].size();

    int l=mod_pow(b,c,k);
    cout<<m[a][(l-1+k)%k]<<endl;

}
    

