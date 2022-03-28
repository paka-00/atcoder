#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll= long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    int l,q;cin>>l>>q;
    set<int>a={0,l};
    rep(i,q){
        int c,x;cin>>c>>x;
        if(c==2){
            auto itr=a.lower_bound(x);
            cout<<*itr-*prev(itr)<<endl;
        }
        else{
            a.insert(x);
        }
    }
    return 0;
}