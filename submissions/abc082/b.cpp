#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    string s,t;cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end(),greater<char>());
    if(s<t)cout<<"Yes"<<endl;else cout<<"No"<<endl;
}