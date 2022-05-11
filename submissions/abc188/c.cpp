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
const ll mod=1000000007;


int main(){
    ll n;cin>>n;ll m=1<<n;
    vector<pair<ll,ll>> a(1<<n);
    rep(i,1<<n){
        ll tmp;cin>>tmp;
        a[i]={tmp,i+1};
    }
    ll max_v=0,max_idx,ans;
    rep(i,m){
        if(max_v<a[i].first){
            max_v=a[i].first;
            max_idx=i;
        }
    }
    ll max_v2=0;
    if(max_idx<m/2){
        for(ll i=m/2;i<m;i++){
            if(max_v2<a[i].first){
                max_v2=a[i].first;
                ans=i;
            }
        }
    }
    else{

        for(ll i=0;i<(m/2);i++){

                if(max_v2<a[i].first){
                    max_v2=a[i].first;
                    ans=i;
                }
            }
        
    }
    cout<<ans+1<<endl;
    
}

