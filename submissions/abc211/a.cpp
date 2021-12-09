#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int a,b;cin>>a>>b;
    long double c;
    c=(a-b)/3.0+b;
    cout<<setprecision(10)<<c<<endl;
}

