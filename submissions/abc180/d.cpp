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
    ll x,y,a,b;cin>>x>>y>>a>>b;
    ll ans=0;
    while((double)a*x<=2e18 && a*x<=x+b && a*x<y){
		x*=a;
		ans++;
	}
	cout << ans+(y-1-x)/b << endl;
}