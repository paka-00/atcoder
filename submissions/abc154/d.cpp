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
#define gsort(a)sort(a.begin(),a.end(),greater<ll>());
const ll mod=1000000007;


int main(){
    ll n,k;cin>>n>>k;
    vector<ld> p(n);rep(i,n){ll t;cin>>t;p[i]=((ld)t+1.0)/2;}
    ld ans=0,tmp=0;
    rep(i,n){
        if(i<k)tmp+=p[i];
        else{
            tmp+=p[i]-p[i-k];
        }
        chmax(ans,tmp);
    }
    cout<<setprecision(18)<<ans<<endl;
}

