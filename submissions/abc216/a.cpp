#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    char s;
    int x,y;cin>>x>>s>>y;
    cout<<x;
    string t="";
    if(y<3)t+='-';
    else if(y<7)t="";
    else t+='+';
    cout<<t<<endl;
}

