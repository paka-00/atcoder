#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;


int main(){
    int x,y;cin>>x>>y;
    int t=(y-x+9)/10;
    if(t>=0)
        cout<<t<<endl;
    else cout<<0<<endl;
}

