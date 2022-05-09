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
    int n,q;cin>>n>>q;
    vl a(n+1),b(n+1);
    rep(i,n+1){
        a[i]=i;b[i]=i;
    }
    rep(i,q){
        int x;cin>>x;
        int p0=b[x];
        int p1=p0;
        if(p0!=n)p1++;
        else p1--;
        int v0=a[p0],v1=a[p1];
        swap(a[p0],a[p1]);
        swap(b[v0],b[v1]);
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";cout<<endl;
}

