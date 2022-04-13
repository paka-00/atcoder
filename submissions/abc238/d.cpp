#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll t;cin>>t;
    rep(i,t){
        ll a,s;cin>>a>>s;
        bool isok=false;
        if(s-a>=0&&((a&(s-a))==a))isok=true;
        if(isok)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
