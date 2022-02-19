#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
    vector<int>x={1,2,2,1,-1,-2,-2,-1};
    vector<int>y={2,1,-1,-2,-2,-1,1,2};
    bool isok=false;
    for(int i=0;i<8;i++){
        ll a=x1+x[i],b=y1+y[i];
        for(int j=0;j<8;j++){
            if(a+x[j]==x2&&b+y[j]==y2)isok=true;
        }
    }
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}