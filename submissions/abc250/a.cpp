#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    int h,w,r,c;cin>>h>>w>>r>>c;
    int ans=4;
    if(r>=h)ans--;
    if(r==1)ans--;
    if(c>=w)ans--;
    if(c==1)ans--;
    cout<<ans<<endl;
}

