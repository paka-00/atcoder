#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    string s;
    list<string>atcoder={"ABC","AGC","AHC","ARC"};
    for(int i=0;i<3;i++){
        cin>>s;
        atcoder.remove(s);
    }
    for(auto v:atcoder)cout<<v<<endl;
}

