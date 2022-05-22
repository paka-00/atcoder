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
    ll n;cin>>n;vl a(n);
    map<ll,pair<ll,ll>>m;
    rep(i,n){
        cin>>a[i];
        m[a[i]].first++;
    }
    ll ans=0;
    ll t1=n;
    auto it1=m.begin();
    ll sum=0;
    while(it1!=m.end()){
        it1->second.second=sum;
        sum+=it1->second.first;
        it1++;
    }
    it1=m.begin();
    while(it1!=m.end()){
        ll tmp=it1->second.second;
        ans+=(tmp)*it1->second.first*(n-tmp-it1->second.first);
        it1++;
    }
    cout<<ans<<endl;
    
}

