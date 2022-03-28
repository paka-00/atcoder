#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll= long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    string s;cin>>s;
    ll t;cin>>t;
    vector<ll> d={0,0,0,0,0};//'URDL'
    for(auto v:s){
        if(v=='U')d[0]++;
        else if(v=='R')d[1]++;
        else if(v=='D')d[2]++;
        else if(v=='L')d[3]++;
        else d[4]++;
    }
    ll up=abs(d[0]-d[2]),r=abs(d[1]-d[3]);
    if(t==1){
        cout<<d[4]+up+r<<endl;
    }
    else{
        if(up+r<=d[4])cout<<(abs(up+r-d[4]))%2<<endl;
        else cout<<up+r-d[4]<<endl;
    }
    return 0;
}