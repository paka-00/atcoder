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
const ll mod=1000000007;


int main(){
    ll n;cin>>n;vl a(n);rep(i,n){
        ll tmp;cin>>tmp;
        a[i]=2*tmp;
    }
    vl b(n);ll tmp=1;
    rep(j,n){  
        b[0]+=a[(j)%n]*tmp;
        tmp*=-1;
    }
    b[0]/=2;
    tmp=b[0];
    for(ll i=1;i<n;i++){
        b[i]=a[i-1]-tmp;
        tmp=b[i];
    }
    for(auto v:b)cout<<v<<" ";cout<<endl;
    
}

