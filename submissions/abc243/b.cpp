#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)


int main(){
    ll n;cin>>n;
    vector<ll>a(n),b(n);
    map<ll,bool>c;

    ll ans1=0,ans2=0;
    rep(i,n){
        cin>>a[i];
        c[a[i]]=true;
        }
    rep(i,n){
        int b;cin>>b;
        if(b==a[i])ans1++;
        else if(c[b])ans2++;
    }
    cout<<ans1<<endl<<ans2<<endl;
}