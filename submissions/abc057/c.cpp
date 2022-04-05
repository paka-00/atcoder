#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}


int f(ll a,ll b){
    return max(to_string(a).size(),to_string(b).size());
}

int main(){
    ll n;cin>>n;
    vector<pair<ll,ll>>t=prime_factorize(n);
    vector<ll>p;
    for(auto v:t){
        for(int i=0;i<v.second;i++){
            p.push_back(v.first);
        }
    }
    //for(auto v:p)cout<<v<<" ";cout<<endl;
    
    ll ans=LONG_LONG_MAX;
    for(ll bit=0;bit<1<<(p.size());bit++){
        ll a=1;
        for(int i=0;i<p.size();i++){
            if(bit&(1<<i))a*=p[i];
        }
        //cout<<a<<endl;
        ll tmp=f(a,n/a);
        if(tmp<ans)ans=tmp;
    }
    cout<<ans<<endl;
}
