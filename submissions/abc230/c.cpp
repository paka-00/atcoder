#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;



int main(){
    ll n,a,b,p,q,r,s;
    cin>>n>>a>>b>>p>>q>>r>>s;
    for(ll i=p;i<=q;i++){
        for(ll j=r;j<=s;j++){
            if(j==i-a+b||j==-i+a+b)cout<<"#";
            else cout<<".";
        }cout<<endl;
    }
}