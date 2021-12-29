#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=unsigned long long;

int main(){
    ll q,h,s,d;cin>>q>>h>>s>>d;
    ll n;cin>>n;
    chmin(h,2*q);
    chmin(s,2*h);
    ll ans;
    if(s*2>d){
        ans=n/2*d+n%2*s;
    }
    else{
        ans=s*n;
    }
    cout<<ans<<endl;
}