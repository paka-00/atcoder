#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}

using namespace std;
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using ld=long double;
using pll=pair<ll,ll>;
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
const ll mod=1000000007;


int main(){
    int n;cin>>n;
    vl a(n);rep(i,n)cin>>a[i];
    vl b(n);rep(i,n)cin>>b[i];
    ll ans=0;
    rep(i,n){
        ans+=a[i]*b[i];
    }
    if(ans==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

