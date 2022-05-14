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
#define ssort(a)sort(a.begin(),a.end());
const ll mod=1000000007;

int main(){
    vl a(5);
    rep(i,5){
        ll t;cin>>t;
        a[i]=t;
    }
    set<ll> s;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int l=j+1;l<5;l++){
                ll sum=a[i]+a[j]+a[l];
                s.insert(sum);
            }
        }
    }
    auto itr=s.end();itr--;itr--;itr--;
    cout<<*itr<<endl;
}

