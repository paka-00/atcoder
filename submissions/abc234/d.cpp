#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;


int main(){
    ll n,k;cin>>n>>k;
    vector<ll>p(n);
    vector<ll>q;
    for(ll i=0;i<n;i++){
        cin>>p[i];
        if(i<k)q.push_back(p[i]);
    }
    sort(q.begin(),q.end());
    priority_queue<ll,vector<ll>,greater<ll> >Q;
    priority_queue<ll,vector<ll>,greater<ll> >p;
    for(auto v:q)Q.push(v);
    cout<<Q.top()<<endl;;
    for(ll i=k+1;i<=n;i++){
        ll now=p[i-1];
        if(Q.top()<now){
            Q.pop();
            Q.push(now);
        }
        cout<<Q.top()<<endl;
    }
}
