#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    set<string> in;
    string s;
    for(int i=0;i<4;i++){cin>>s;in.insert(s);}
    if(in.size()==4)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

