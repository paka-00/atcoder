#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

ll ndiv(ll s){
    ll n=0,m=1;
    string t=to_string(s);
    for(int i=0;i<t.size();i++){
        n+=m*(t[t.size()-i-1]-'0');
        m*=s;
    }
    return n;
}

int main(){
    ll a;cin>>a;
    for(ll i=10;i<=10000;i++){
        if(ndiv(i)==a){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
