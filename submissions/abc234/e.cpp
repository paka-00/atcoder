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

set<ll>make(){
    set<ll>p;
    for(ll i=1;i<10;i++){
        for(int d=-9;d<9;d++){
            string s;
            ll a=i;
            for(ll j=0;j<18;j++){
                s.push_back(a+'0');
                a+=d;
                p.insert(stoll(s));
                if(a>9||a<0)break;
            }
        }
    }
    return p;
}

int main(){
    ll n;cin>>n;
    set<ll>ans=make();
    cout<<*ans.lower_bound(n)<<endl;
    
}