#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    int a,b,c,d,e,f,x;
    cin>>a>>b>>c>>d>>e>>f>>x;
    int t=x/(a+c);
    int dt=b*(a*t+min(x%(a+c),a));
    int ao=x/(d+f);
    int da=e*(d*ao+min(x%(d+f),d));

    if(dt>da)
        cout<<"Takahashi"<<endl;
    else if(da>dt)cout<<"Aoki"<<endl;
    else cout<<"Draw"<<endl; 
}