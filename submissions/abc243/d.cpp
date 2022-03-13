#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = unsigned long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n,x;cin>>n>>x;
    string s;cin>>s;
    string S;
    rep(i,n){
        if(s[i]=='U'&&!S.empty()&&S.back()!='U')
            S.pop_back();
        else S+=s[i];
    }
    for(auto v:S){
        if(v=='U')x/=2;
        else if(v=='R') x=x*2+1;
        else x*=2;
    }
    cout<<x<<endl;
}