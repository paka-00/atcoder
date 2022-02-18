#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
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
    int h,w;cin>>h>>w;
    int q,i,j;cin>>q;
    int n=h*w;
    UnionFind u(n+1);
    vector<bool>G(n+1);
    G.assign(n+1,false);
    int k[4]={-1,1,w,-w};
    int dx[4] = { -1, 0, 1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
    for(i=0;i<q;i++){
        int t;cin>>t;
        if(t==1){
            int r,c;cin>>r>>c;
            int a=(r-1)*w+c-1;
            G[a]=true;
            for (int i = 0; i < 4; i++) {
                int sx = r + dx[i], sy = c + dy[i];
                if (G[(sx - 1) * w + (sy - 1)] == false) continue;
                int hash1 = (r - 1) * w + (c - 1);
                int hash2 = (sx - 1) * w + (sy - 1);
                u.merge(hash1, hash2);
	        }
            
        }
        else{
            int ra,rb,ca,cb;cin>>ra>>ca>>rb>>cb;
            int a=(ra-1)*w+ca-1,b=(rb-1)*w+cb-1;
            if(!G[a]||!G[b])cout<<"No"<<endl;
            else if(u.issame(a,b))cout<<"Yes"<<endl;
            else     cout<<"No"<<endl;
        }
    }
    
}

    