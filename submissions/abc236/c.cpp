#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll m,n,i;cin>>n>>m;
    vector<string>s(n);
    queue<string>que;
    rep(i,n)cin>>s[i];
    rep(i,m){
        string temp;cin>>temp;
        que.push(temp);
    }
    for(auto v:s){
        if(v==que.front()){cout<<"Yes"<<endl;que.pop();}
        else cout<<"No"<<endl;
    }
}   

