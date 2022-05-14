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
#define sort(a)sort(a.begin(),a.end());

const ll mod=1000000007;
int main(){
    int n,k;cin>>n>>k;
    vl h(n);rep(i,n)cin>>h[i];
    sort(h);
    cout<<distance(lower_bound(h.begin(),h.end(),k),h.end())<<endl;
}

