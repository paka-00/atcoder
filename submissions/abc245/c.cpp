
#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n,k;cin>>n>>k;
    vector<ll>A(n),B(n);
    rep(i,n)cin>>A[i];
    rep(i,n)cin>>B[i];
    bool a=true,b=true,na=false,nb=false;
    bool isok=true;
    for(ll i=0;i<n-1;i++){
        na=false;nb=false;
        if(a){
            if(labs(A[i]-A[i+1])<=k){
                na=true;
            }
            if(labs(A[i]-B[i+1])<=k)nb=true;   
        }
        if(b){
            if(labs(B[i]-A[i+1])<=k)na=true;
            if(labs(B[i]-B[i+1])<=k)nb=true;
        }
        a=na;b=nb;
        if(!na&&!nb)isok=false;
    }
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
