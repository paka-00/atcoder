#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    int x1,y1,x2,y2,x3,y3;cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int x4=0,y4=0;
    if(x1==x2)x4=x3;
    else if(x1==x3)x4=x2;
    else if(x2==x3)x4=x1;
    if(y1==y2)y4=y3;
    else if(y1==y3)y4=y2;
    else if(y2==y3)y4=y1;
    cout<<x4<<" "<<y4<<endl;
}
