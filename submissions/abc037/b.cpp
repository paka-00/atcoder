#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n,q,i;cin>>n>>q;
    vector<ll> a(n);
    ll l,r,t;
    for(i=0;i<q;i++){
        cin>>l>>r>>t;
        for(int j=l-1;j<r;j++)
            a[j]=t;
    }
    for(auto v:a)cout<<v<<endl;
}

