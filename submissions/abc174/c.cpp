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
    ll k;cin>>k;
    ll tmp=7%k;
    set<ll>c;
    ll ans=1;
    while(c.find(tmp)==c.end()){
        if(tmp%k==0){
            cout<<ans<<endl;
            return 0;
        }
        else{
            ans++;
            c.insert(tmp);
            tmp=(10*tmp+7)%k;
            
        }
    }
    cout<<-1<<endl;
}