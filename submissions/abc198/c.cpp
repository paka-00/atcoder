#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
const ll mod=1000000007;


int main(){
    long double r,x,y;cin>>r>>x>>y;
    x*=x;y*=y;
    long double d=sqrt(x+y);
    auto ans=ceil(sqrt(x+y)/r);
    if(d<r)ans++;
    cout<<ans<<endl;

}

