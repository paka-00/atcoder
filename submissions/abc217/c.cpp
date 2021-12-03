#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n,i,t;cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>t;
        a[t-1]=i+1;
    }
    for(auto v:a)cout<<v<<" ";
    cout<<endl;
}

