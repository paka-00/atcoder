#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    int a,b;cin>>a>>b;
    int ans=(b+a-3)/(a-1);
    cout<<ans<<endl;
}

