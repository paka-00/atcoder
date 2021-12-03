#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n;cin>>n;
    cout<<"AGC";
    if(n>=42)n++;
    cout<<setw(3)<<setfill('0')<<to_string(n)<<endl;
}

