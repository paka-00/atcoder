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
    ld a,b,c;cin>>a>>b>>c;
    ld ans;
    ld v=a*a*b;
    ld s=c/a;
    ld h=2*s/b;
    if(c<v*0.5)
        ans=atan(b/h)*180/M_PI;
    else{
        s=a*b-s;
        h=2*s/a;
        ans=atan(h/a)*180/M_PI;
    }
    cout<<setprecision(18)<<ans<<endl;


}

