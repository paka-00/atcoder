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
    ll t,n;cin>>t>>n;
    vector<bool> a(100+t,true);
    rep(i,100){
        a[((100+t)*i)/100]=false;
    }
    vector<ll>b;
    rep(i,101+t){
        if(a[i])b.push_back(i);
    }
    int q=(n-1)/t,r=(n-1)%t;

    cout<<(100+t)*q+b[r]<<endl;
}

