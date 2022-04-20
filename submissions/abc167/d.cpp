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
    ll n,k;cin>>n>>k;
    vl a(n+1);
    rep(i,n)cin>>a[i+1];
    ll now=a[1],cnt=1;
    vl b={1};
    ll ans;
    set<ll>used;
    used.insert(1);
    while(used.find(now)==used.end()){
        b.push_back(now);
        used.insert(now);
        now=a[now];
        cnt++;
    }
    ll tmp=abs(distance(b.begin(),find(b.begin(),b.end(),now)));
    cnt-=tmp;
    
    vl c;
    for(int i=b.size()-cnt;i<b.size();i++)c.push_back(b[i]);
    if(k<b.size())ans=b[k];
    else{
        ans=c[(k-tmp)%c.size()];
    }
    cout<<ans<<endl;
}