#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
class UnionFind {
public:
    vector < ll > par; // 各元の親を表す配列
    vector < ll > siz; // 素集合のサイズを表す配列(1 で初期化)

    // Constructor
    UnionFind(ll sz_): par(sz_), siz(sz_, 1) {
        for (ll i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }
    void init(ll sz_) {
        par.resize(sz_);
        siz.assign(sz_, 1);
        for (ll i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }

    // Member Function
    // Find
    ll root(ll x) { // 根の検索
        while (par[x] != x) {
            x = par[x] = par[par[x]]; // x の親の親を x の親とする
        }
        return x;
    }

    // Union(Unite, Merge)
    bool merge(ll x, ll y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        // merge technique（データ構造をマージするテク．小を大にくっつける）
        if (siz[x] < siz[y]) swap(x, y);
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }

    bool issame(ll x, ll y) { // 連結判定
        return root(x) == root(y);
    }

    ll size(ll x) { // 素集合のサイズ
        return siz[root(x)];
    }
};

int main(){
    ll n,m;cin>>n>>m;
    vector<ll>a(n),b(n);
    UnionFind u(n+1);
    map<ll,ll>sum_a,sum_b;
    vector<bool>used(n+1);
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];
    rep(i,m){
        ll c,d;cin>>c>>d;
        u.merge(c,d);
    }
    rep(i,n){
        sum_a[u.root(i+1)]+=a[i];
        sum_b[u.root(i+1)]+=b[i];
    }
    bool isok=true;
    rep(i,n){
        if(sum_a[u.root(i)]!=sum_b[u.root(i)])isok=false;
    }
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;

}
