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
    int n,d;cin>>n>>d;
    vvl x(n+1,vl(d+1));
    ll ans=0;
    rep(i,n){
        rep(j,d)cin>>x[i][j];
    }   
    rep(i,n){
        for(ll j=i+1;j<n;j++){
            ld dist=0;
            for(ll k=0;k<d;k++){
                dist+=(ld)pow(x[i][k]-x[j][k],2);
            }
            dist=sqrt(dist);
            if(dist==(ll)dist)ans++;
        }
    }
    cout<<ans<<endl;
}

