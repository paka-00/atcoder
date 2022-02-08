#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll h,w;cin>>h>>w;
    vector<vector<int>> v(h, vector<int>(w));
    int i,j;
    for(i=0;i<h;i++){
        for(j=0;j<w;j++)cin>>v[i][j];
    }
    
    for(i=0;i<w;i++){
        for(j=0;j<h;j++){cout<<v[j][i]<<" ";}
        cout<<endl;
        }
}
