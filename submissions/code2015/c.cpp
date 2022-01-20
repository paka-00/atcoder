#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll n,m;cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(m);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end(),greater<ll>());
    bool isok=true;
    if(n<m)isok=false;
    for(ll i=0;i<m;i++){
        if(a[i]<b[i]){isok=false;break;}
    }
    if(isok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

