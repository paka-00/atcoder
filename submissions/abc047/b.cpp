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
    int w,h,n;cin>>w>>h>>n;
    int w_max=w,w_min=0,h_max=h,h_min=0;
    rep(i,n){
        int x,y,a;cin>>x>>y>>a;
        if(a==1){
            chmax(w_min,x);
        }
        else if(a==2){
            chmin(w_max,x);
        }
        else if(a==3){
            chmax(h_min,y);
        }
        else{
            chmin(h_max,y);
        }
    }

    if(w_max<=w_min||h_max<=h_min){
        cout<<0<<endl;
    }
    else{
        cout<<(h_max-h_min)*(w_max-w_min)<<endl;
    }
}