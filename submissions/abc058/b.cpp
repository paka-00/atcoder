#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
    string o,e;cin>>o>>e;
    for(int i=0;i<o.size()+e.size();i++){
        if(i%2==0)cout<<o[i/2];
        else cout<<e[i/2];
    }
    cout<<endl;
}
