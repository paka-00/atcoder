#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int t;cin>>t;long double l,x,y;cin>>l>>x>>y;
    int q; cin>>q;
    long double Y,Z;
    for(int i=0;i<q;i++){
        long double e;cin>>e;
        Y=-l/2*sin(2*M_PI*e/t);
        Z=l/2-l/2*cos(2*M_PI*e/t);
        long double d=sqrt(pow(x,2)+pow(y-Y,2));
        long double theta=atan(Z/d);
        cout<<setprecision(18)<<theta*180/M_PI<<endl;
    }
}