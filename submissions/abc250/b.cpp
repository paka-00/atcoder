#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
    int n,a,b;cin>>n>>a>>b;
    int w=1;
    string W,B;
    rep(i,n){
        rep(j,b){
            if(w==1)
            W+='.';
            else W+='#';
        }w*=-1;
    }
    w=1;
    rep(i,n){
        rep(j,b){
            if(w==1)
            B+='#';
            else B+='.';
        }w*=-1;
    }
    w=1;
    rep(i,n){
        rep(j,a){
            if(w==1)
            cout<<W<<endl;
            else cout<<B<<endl;
        }
        w*=-1;
    }
    
    
}

