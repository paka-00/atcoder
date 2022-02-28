#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
ll l=1000000000000000000;

ll gcd(ll a,ll b){
    if(a<b) swap(a,b);
    ll r;
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
ll lcm(ll a,ll b){
    return ll(a/gcd(a,b))*b;
}

int main(){
    bool la=false;
    ll a,b;cin>>a>>b;
    ll g=b/gcd(a,b);
    if(g>l/a)la=true;
    if(la){cout<<"Large"<<endl;}
    else cout<<g*a<<endl;
}

