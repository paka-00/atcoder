#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    long double a,b;cin>>a>>b;
    long double c=pow(a,2)+pow(b,2);
    long double x,y;
    x=a/sqrt(c);y=b/sqrt(c);
    cout<<setprecision(18)<<x<<" "<<setprecision(18)<<y<<endl;
}
