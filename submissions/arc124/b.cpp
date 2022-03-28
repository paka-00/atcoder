#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll n;cin>>n;
    vector<ll>a(n),b(n),c(n);
    rep(i,n)cin>>a[i];
    rep(i,n){
        cin>>b[i];
        c[i]=a[0]^b[i];
    }
    set<ll>q;
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    rep(i,n){
       vector<ll>d;
       bool isok=true;
       rep(j,n)d.push_back(a[j]^c[i]);
       sort(d.begin(),d.end());
       rep(j,n){
           if(b[j]!=d[j]){
               isok=false;
               break;
           }
       }
       if(isok)q.insert(c[i]);
    }
    cout<<q.size()<<endl;
    for(auto v:q)cout<<v<<endl;

}