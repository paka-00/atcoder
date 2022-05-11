#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
const ll mod=1000000007;


int main(){
    ll n,q;cin>>n>>q;
    vl a(n+1),b(n+1);
    rep(i,n+1){a[i]=i;b[i]=a[i];}
    rep(i,q){
        ll x;cin>>x;
        ll pos1=b[x];
        ll pos2;
        if(pos1==n)pos2=n-1;
        else pos2=b[x]+1;
        ll y=a[pos2];

        swap(a[pos1],a[pos2]);
        swap(b[x],b[y]);
        
    }for(int i=1;i<=n;i++)cout<<a[i]<<" ";
        cout<<endl;
}

