#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)


int main(){
    string x;
    cin >> x;
    int s=0,c=0;
    for(auto &nx : x){s+=(nx-'0');}
    string res;
    for(int i=x.size()-1;;i--){
        c+=s;
        res.push_back('0'+(c%10));
        c/=10;
        if(i>=0){s-=(x[i]-'0');}
        if(i<=0 && c==0){break;}
    }
    reverse(res.begin(),res.end());
    cout << res << '\n';
    return 0;
}
