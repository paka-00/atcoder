#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)


int main(){
    ll n;cin>>n;
    string s;cin>>s;
    deque<ll>ans{n};
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='R')ans.push_front(i);
        else ans.push_back(i);
    }
    for(auto v:ans){
        cout<<v<<" ";
    }cout<<endl;
    
}

