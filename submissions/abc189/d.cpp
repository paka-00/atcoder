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
using vpll=vector<pair<ll,ll>>;
#define sort(v)sort(v.begin(),v.end())
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)

const ll mod=1000000007;


int main(){
    ll n;cin>>n;
    vector<bool>a(n);
    rep(i,n){
        string s;cin>>s;
        if(s=="AND")a[i]=true;
    }
    vl ans(n+1);
    ans[0]=1;
    for(ll i=1;i<=n;i++){
        if(a[i-1]){
            ans[i]=ans[i-1];
        }
        else{
            ans[i]=ans[i-1]+(1LL<<i);
        }
    }
    cout<<ans[n]<<endl;
    
}

