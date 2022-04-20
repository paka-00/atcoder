#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    string s;cin>>s;
    string t;cin>>t;
    int n=s.size();
    bool isok=true;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i])isok=false;
    }
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}