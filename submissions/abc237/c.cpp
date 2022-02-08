#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    string s;cin>>s;
    string rs(s);
    reverse(rs.rbegin(),rs.rend());
    int n=s.size();
    if(s==rs){cout<<"Yes"<<endl;return 0;}
    int ab=0,af=0;
    while(rs[ab]=='a')ab++;
    while(s[af]=='a')af++;
    string re;
    if(ab>=af){
        re=s.substr(af,n-ab-af);
    }
    else{
        re=s.substr(ab,n-ab-ab);
    }
    rs=re;
    reverse(rs.rbegin(),rs.rend());
    if(rs==re)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

