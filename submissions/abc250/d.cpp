#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = unsigned long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

bool IsPrime(ll num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    long double sqrtNum = sqrt(num);
    for (ll i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}


long long f(ll p,ll q){
  double est=1;
  est=(q*q*q);
  est*=p;
  if(est>4e18){return 4e18;}
  return p*q*q*q;
}

int main(){
    ll n;cin>>n;
    vector<ll>p;
    rep(i,1000000){
        if(IsPrime(i))p.push_back(i);
    }
    ll m=p.size();
    ll ans=0;
    int r=m-1;
    for(int l=0;l<m;l++){
        while(l<r && f(p[l],p[r])>n){r--;}
        if(l>=r){break;}
        ans+=(r-l);
    }
  cout<<ans<<endl;
}

