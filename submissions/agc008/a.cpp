#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll x,y;cin>>x>>y;
    ll ans=0;
    if(x*y>0&&x>y){
        ans=x-y;
        ans+=2;
    }
    else if(x*y>=0&&y>=x){
        ans=y-x;
    }
    else if(x*y<0){
        ans=abs(abs(y)-abs(x));
        ans++;
    }
    else if(x==0){
        if(y<0)ans++;
        ans+=abs(y);
    }
    else if(y==0){
        if(x>0)ans++;
        ans+=abs(x);
    }
    cout<<ans<<endl;
}
