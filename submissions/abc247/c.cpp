#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

string s(int i){
    string str;
    if(i==0)return "";
    else {
        str=s(i-1)+" "+to_string(i)+" "+s(i-1);
    }
    return str;
}
int main(){
    int n;cin>>n;
    cout<<s(n)<<endl;
}

