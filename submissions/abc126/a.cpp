#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    s[k-1]=tolower(s[k-1]);
    for(auto v:s)cout<<v;
    cout<<endl;
}

