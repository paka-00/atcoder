#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll q;cin>>q;
    vector<int>a;
    rep(i,q){
        int t;cin>>t;
        int x;cin>>x;
        if(t==1){
            a.insert(a.begin(),x);
        }
        else if(t==2){
            a.push_back(x);
        }
        else{
            cout<<a[x-1]<<endl;
        }
    }
}