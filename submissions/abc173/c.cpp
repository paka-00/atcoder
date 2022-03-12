#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int h,w,k;cin>>h>>w>>k;
    vector<string>c(h);
    vector<string>c2(h);
    rep(i,h)cin>>c[i];
    ll ans=0;
    rep(i,1<<h){
        rep(j,1<<w){
            rep(t,h)c2[t]=c[t];
            rep(v1,h){
                if(i&(1<<v1)){
                    rep(v2,w)c2[v1][v2]='.';
                }
            }
            rep(v2,w){
                if(j&(1<<v2)){
                    rep(v1,h)c2[v1][v2]='.';
                }
            }
            ll cnt=0;
            rep(y,h){
                rep(x,w){
                    if(c2[y][x]=='#')cnt++;
                }
            }
            if(cnt==k)ans++;
        }
    }
    cout<<ans<<endl;
}