#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    string s;cin>>s;
    int n=s.size();
    int N=s.find('N');
    int W=s.find('W');
    int E=s.find('E');
    int S=s.find('S');
    if(S!=string::npos^N!=string::npos||E!=string::npos^W!=string::npos)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}