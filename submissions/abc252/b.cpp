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
const ll mod=998244353;

int main(){
    int n,k;cin>>n>>k;
    vector<pll> a(n);rep(i,n){
        ll t;cin>>t;
        a[i]={t,i+1};
    }
    set<ll> b;rep(i,k){
        int t;cin>>t;
        b.insert(t);
    }
    sort(a.begin(),a.end(),greater<pair<ll,ll>>());
    ll m=a[0].first;
    ll i=0;
    bool s=false;
    while(a[i].first==m&&i<n){
        if(b.find(a[i].second)!=b.end())s=true;
        i++;
    }
    if(s)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}

