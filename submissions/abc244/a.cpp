#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = unsigned long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int n;cin>>n;
    string s;cin>>s;
    cout<<s[n-1]<<endl;
}