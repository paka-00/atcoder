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
    ll n;cin>>n;
    vl a(n);rep(i,n)cin>>a[i];
    ll p=0;
    vector<bool>b(4);
    rep(i,n){
        b[0]=true;
        vector<bool>c(4);
        rep(j,4){
            if(b[j]){
                if(j+a[i]>3)p++;
                else c[j+a[i]]=true;
            }
        }
        rep(j,4)b[j]=c[j];

    }
    cout<<p<<endl;
}

