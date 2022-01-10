#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;


int main(){
    ll n,k;cin>>n>>k;
    priority_queue<int ,vector<int>,greater<int>> que;
    for(ll i=0;i<k;i++){
        ll a;cin>>a;
        que.push(a);
    }
    cout<<que.top()<<endl;
    for(ll i=k+1;i<=n;i++){
        ll a;cin>>a;
        if(a>que.top()){
            que.push(a);
            que.pop();
        }
        cout<<que.top()<<endl;
    }
}
