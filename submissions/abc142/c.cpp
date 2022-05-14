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

int main(){
    int n;cin>>n;
    vector<pll>a(n);
    rep(i,n){
        int t;cin>>t;
        a[i]={t,i+1};
    }
    sort(a);
    rep(i,n){
        cout<<a[i].second<<" ";
    }
    cout<<endl;
}

