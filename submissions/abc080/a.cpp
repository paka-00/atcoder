#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<min(a*n,b)<<endl;
}

