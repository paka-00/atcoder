#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
 
using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using ld=long double;
using pll =pair<ll,ll>;
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
const ll mod=1000000007;
int main(){
    int n;cin>>n;
    ld o=0,e=0;
    for(int i=1;i<=n;i++){
        if(i%2==1)o++;
        else e++;
    }
    ld ans=(o)/(o+e);
    cout<<setprecision(18)<<ans<<endl;
}

