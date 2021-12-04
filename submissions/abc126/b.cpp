#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    string s;cin>>s;
    bool M=false;
    bool Y=false;
    string a,b;
    for(int i=0;i<2;i++){
        a+=s[i];
    }
    for(int i=2;i<4;i++){
        b+=s[i];
    }
    int A,B;
    A=stoi(a);
    B=stoi(b);
    if(0<A&&A<13){M=true;}
    if(0<B&&B<13){Y=true;}
    if(M&&Y)cout<<"AMBIGUOUS"<<endl;
    else if(M&&!Y)cout<<"MMYY"<<endl;
    else if(!M&&Y)cout<<"YYMM"<<endl;
    else cout<<"NA"<<endl;
}

