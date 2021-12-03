#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    string s;cin>>s;
    ll x=0;
    while(s[x]=='x'){
        x++;
    }
    bool c=false;
    if(x>2){cout<<"No"<<endl;return 0;}
    for(int i=x;i<s.size();i++){
        if(s[i]=='o'&&!c){x=0;c=true;}
        else if(c&&s[i]=='x'){x++;if(x==2){x=0;c=false;}}
        else{cout<<"No"<<endl;return 0;}
    }
    cout<<"Yes"<<endl;
}

