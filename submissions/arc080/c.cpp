#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
    ll n;cin>>n;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    int two=0,four=0;
    for(int i=0;i<n;i++){
        if(a[i]%4==0)four++;
        else if(a[i]%2==0)two++;
    }
    if(n/2<=four+two/2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
    
