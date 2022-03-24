#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

template <typename T>
vector<pair<T, T>> prime_factor(T n) {
    vector<pair<T, T>> ret;
    for (T i = 2; i * i <= n; i++) {
        if (n % i != 0) continue;
        T tmp = 0;
        while (n % i == 0) {
            tmp++;
            n /= i;
        }
        ret.push_back(make_pair(i, tmp));
    }
    if (n != 1) ret.push_back(make_pair(n, 1));
    return ret;
}

int main(){
    ll n;cin>>n;
    ll ans=0;
    vector<pair<ll,ll>>p=prime_factor(n);
    for(auto v:p){
        //cout<<v.first<<endl;
        ll k=1;
        ll t=v.first;
        while(n%t==0){
            n/=t;
            t*=v.first;
            k++;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
