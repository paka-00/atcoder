#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
    ll n;cin>>n;
    string s;cin>>s;
    ll r=0,g=0,b=0;
    for(auto v:s){
        if(v=='R')r++;
        else if(v=='G')g++;
        else b++;
    }
    ll ans=r*g*b;
   for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            char t1=s[i],t2=s[j];
            if(t1!=t2&&j+j-i<n){
                ll d=j-i;
                char t3=s[j+d];
                //cout<<t3<<endl;
                if(t3!=t1&&t3!=t2)ans--;
            }
        }
    }
    cout<<ans<<endl;
}