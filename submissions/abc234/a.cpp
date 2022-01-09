#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

ll f(ll x){
    ll y=pow(x,2)+2*x+3;
    return y;
}
int main(){
    ll t;cin>>t;
    ll y=f(f(f(t)+t)+f(f(t)));
    cout<<y<<endl;
}
