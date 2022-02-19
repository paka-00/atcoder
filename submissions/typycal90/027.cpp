#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int n;cin>>n;
    vector<int>ans;
    set<string>s;
    for(int i=1;i<=n;i++){
        string st;cin>>st;
        if(s.find(st)==s.end()){
            s.insert(st);
            cout<<i<<endl;
        }
    }
    
}