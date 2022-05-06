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
    ll q;cin>>q;
    priority_queue<ll,vl, greater<ll>>ball;
    ll tmp=0;
    rep(i,q){
        int t,x;cin>>t;
        if(t==1){
            cin>>x;
            ball.push(x-tmp);
        }
        else if(t==2){
            cin>>x;
            tmp+=x;
        }
        else{
            cout<<ball.top()+tmp<<endl;
            ball.pop();
        }
    }
}