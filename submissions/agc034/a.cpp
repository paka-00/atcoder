#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = unsigned long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n,a,b,c,d,i,j;cin>>n>>a>>b>>c>>d;
    string s;cin>>s;
    s=' '+s;
    bool isok=true;
    
    if(c<d){
        for(ll i=a;i<=d;i++){
            if(s[i]=='#'&&s[i+1]=='#')isok=false;
        }
    }
    else{
        bool next=false;
        for(ll i=b;i<=d;i++){
            if(i>0&&s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.')next=true;
        }
        isok=next;
    }
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
