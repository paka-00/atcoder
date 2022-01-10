#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

ll ans=0;
vector<vector<ll>> a;
ll n,x;
void dfs(ll pos,ll product){
    if(pos==n){
        if(product==x)ans++;
        return;
    }
    for(ll c:a[pos]){
        if(product*c>x)continue;
        dfs(pos+1,product*c);
    }
}

int main(){
    cin>>n>>x;
    a.resize(n);
    ll i,j;
    for(i=0;i<n;i++){
        ll l;cin>>l;
        for(j=0;j<l;j++){
            ll t;cin>>t;
            a[i].push_back(t);
        }
    }
    dfs(0,1);
    cout<<ans<<endl;
}


