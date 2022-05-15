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
    ll n;cin>>n;
    vector<pair<string,ll>>a(n);
    set<string>p;
    ll ans=0;
    ll idx=-1;
    rep(i,n){
        string s;cin>>s;
        ll t;cin>>t;
        if(p.find(s)==p.end()){
            if(ans<t){
                ans=t;
                idx=i+1;
            }
        }
        p.insert(s);
    }
    cout<<idx<<endl;
}

