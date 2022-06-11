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
    ll n,q;cin>>n>>q;
    vl a(n);
    ll sum=0;
    rep(i,n){cin>>a[i];sum+=a[i];}
    ssort(a);
    map<ll,ll>m;
    ll tmp=0;m[0]=0;
    rep(i,n){
        tmp+=a[i];
        m[a[i]]=tmp;
    }
    rep(i,q){
        ll x;cin>>x;
        auto it=m.upper_bound(x);
        it--;
        //cout<<it->first<<" "<<it->second<<endl;
        ll s1=it->second,s2=sum-s1;
        ll s3=distance(a.begin(),upper_bound(a.begin(),a.end(),x));
        //cout<<s3<<endl;
        ll t1=x*s3-it->second;
        //cout<<t1<<endl;
        ll t2=sum-it->second-x*(n-s3);
        ll ans=t1+t2;
        cout<<ans<<endl;
    }
}

