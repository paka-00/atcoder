#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    bool t=false;
    if(a<c)t=true;
    else if(a==c&&b<=d)t=true;
    if(t)cout<<"Takahashi"<<endl;
    else cout<<"Aoki"<<endl;
}
