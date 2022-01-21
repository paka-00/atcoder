#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)


ll gcd(ll x,ll y){
    if(x<y) swap(x,y);
    //xの方が常に大きい
    ll r;
    while(y>0){
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}


ll lcm(ll x,ll y){
    return ll(x/gcd(x,y))*y;
}

int main(){
    ll n,m,i=0;
    cin>>n>>m;
    string s,t;cin>>s>>t;
    bool isok=true;
    ll l=lcm(n,m);
    ll N=l/n,M=l/m;
    ll j=0,k=0;
    ll o=min(N,M);
    for(i=0;i<l;i+=o){
        if(i%N==0&&i%M==0){            
            if(s[j]!=t[k]){
                isok=false;
                break;
            }
            j+=M;k+=N;
        }
    }
    
    if(isok)cout<<l<<endl;
    else cout<<-1<<endl;
}

