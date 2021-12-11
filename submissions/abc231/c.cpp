#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n,q;cin>>n>>q;
    vector<ll>X(n);
    ll i,j;
    for(i=0;i<n;i++){
        cin>>X[i];
    }
    sort(X.begin(),X.end());
    ll a,b,idx;
    for(j=0;j<q;j++){
        cin>>a;
        auto id =lower_bound(X.begin(),X.end(),a);
        ll idx =distance(X.begin(),id);
        cout<<n-idx<<endl;
    }
}