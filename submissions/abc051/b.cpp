#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
    int k,s;cin>>k>>s;
    ll ans=0;
    for(int x=0;x<=k;x++){
        for(int y=0;y<=k;y++){
            if(s-(x+y)>=0&&s-(x+y)<=k)ans++;
        }
    }
    cout<<ans<<endl;
}
