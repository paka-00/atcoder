#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = unsigned long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    string s;cin>>s;ll n=s.size();
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(s[i-1]=='U'){
            ans+=n-i;
            ans+=2*(i-1);
        }
        else{
            ans+=i-1;
            ans+=2*(n-i);
        }
    }
    cout<<ans<<endl;
}
