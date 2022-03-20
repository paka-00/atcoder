#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    string t;cin>>t;
    ll x=0,y=0;
    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};
    ll i=0;
    for(auto v:t){
        if(v=='S'){
            x+=dx[i];
            y+=dy[i];
        }
        else{
            i=(i+1)%4;
        }
    }
    cout<<x<<" "<<y<<endl;
}