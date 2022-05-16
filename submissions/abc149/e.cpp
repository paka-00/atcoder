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
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define ssort(a) sort(a.begin(),a.end());
#define gsort(a) sort(a.begin(),a.end(),greater<ll>());
const ll mod=1000000007;

int main(){
    ll n;cin>>n;
    ll tmp=5;
    ll ans=0;
    if(n%2==1){
        cout<<0<<endl;
        return 0;
    }
    while(n>=tmp){
        ans+=(n/tmp)/2;
        tmp*=5;
    }
    cout<<ans<<endl;
}
