#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    string s;cin>>s;
    int n=s.size();
    string t;
    //AKIHABARA
    if(s[0]!='A')s='A'+s;
    if(s.substr(1,3)!="KIH"){cout<<"NO"<<endl;return 0;}
    if(s[4]!='A'){s=s.substr(0,4)+'A'+s.substr(4,n);}
    if(s[5]!='B'){cout<<"NO"<<endl;return 0;}
    if(s[6]!='A'){s=s.substr(0,6)+'A'+s.substr(6,n);}
    if(s[7]!='R'){cout<<"NO"<<endl;return 0;}
    if(s[8]!='A'){s=s.substr(0,8)+'A'+s.substr(8,n);}
    //cout<<s<<endl;
    if(s=="AKIHABARA")cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}