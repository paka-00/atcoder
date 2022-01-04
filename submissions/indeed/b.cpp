#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int i;
    bool isok=false;
    if(s==t){cout<<0<<endl;return 0;}
    for(i=1;i<n;i++){
        char tmp=s[n-1];
        s=tmp+s;
        s=s.substr(0,n);
        if(s==t){cout<<i<<endl;isok=true;return 0;}
    }
    if(!isok)cout<<-1<<endl;
}
