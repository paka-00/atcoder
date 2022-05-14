#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    string s;cin>>s;
    int n=s.size();
    int str=n,fin=0;
    rep(i,n){
        if(s[i]=='A'){str=i;break;}
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='Z'){fin=i;break;}
    }
    cout<<fin-str+1<<endl;
}

