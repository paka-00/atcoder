#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    string s;cin>>s;
    ll k;cin>>k;
    for(int i=0;i<k;i++){
        if(s[i]!='1'){cout<<s[i]<<endl;return 0;}
    }
    cout<<s[k-1]<<endl;
}