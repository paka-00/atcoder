#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    string n;cin>>n;
    ll even=0,odd=0;
    int e=-1;
    if(n.size()%2==0)e=1;
    for(auto v:n){
        if(e==1)even+=(v-'0');
        else odd+=(v-'0');
        e*=-1;
    }
    cout<<even<<" "<<odd<<endl;
    return 0;
}
