#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int h,w;cin>>h>>w;
    vector<vector<int>>a(h,vector<int>(w));
    int i,j;
    for(i=0;i<h;i++){
        for(j=0;j<w;j++)cin>>a[i][j];
    }
    vector<vector<int>>b(h,vector<int>(w));
    vector<int>H(h);
    vector<int>W(w);
    for(i=0;i<h;i++){
        for(j=0;j<w;j++)
            H[i]+=a[i][j];
    }
    for(j=0;j<w;j++){
        for(i=0;i<h;i++)
            W[j]+=a[i][j];
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            b[i][j]=H[i]+W[j]-a[i][j];
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            cout<<b[i][j]<<" ";
        }cout<<endl;
    }
}