#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

string toBinary(ll n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}


int main(){
    ll n,l,r;cin>>n>>l>>r;
    ll ans=0;
    string bn=toBinary(n);
    for(ll i=bn.size()-1;i>=0;i--){
        if(bn[i]=='1'){
            ans+=max((ll)0,(min(r,(ll)pow(2,(i+1))-1)-max(l,(ll)pow(2,i)))+1);
            
        }
    }

    cout<<ans<<endl;
}

