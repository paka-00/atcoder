#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int h,w;cin>>h>>w;
    int ans;
    if(h==1||w==1)ans=h*w;
    else ans=((h+1)/2)*((w+1)/2);
    cout<<ans<<endl;
}