#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n,q;cin>>n>>q;
    map<ll,vector<ll>>m;
    for(ll i=1;i<=n;i++){
        ll a;cin>>a;
        m[a].push_back(i);
    }
    for(ll i=0;i<q;i++){
        ll x,k;cin>>x>>k;
        if(m[x].size()<k)cout<<-1<<endl;
        else{
            cout<<m[x][k-1]<<endl;
        }
    }
}

