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
const ll mod=998244353;

int main(){
    ll n,k;cin>>n>>k;
    set<ll>a;
    rep(i,k){ll t;cin>>t;t--;a.insert(t);}
    vector<pll>z1,z2;
    rep(i,n){
        ll x,y;cin>>x>>y;
        if(a.find(i)==a.end())
            z1.push_back({x,y});
        else z2.push_back({x,y});
    }
    long double ans=0.0;
    rep(i,z1.size()){
        ld tmp=1000000.0;
        rep(j,z2.size()){
            ld d=(ld)pow(z1[i].first-z2[j].first,2)+(ld)pow(z1[i].second-z2[j].second,2);
            d=sqrt(d);
            chmin(tmp,d);
        }
        chmax(ans,tmp);

    }
    cout<<setprecision(18)<<ans<<endl;    
}

