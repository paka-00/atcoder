#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=10007;

vector<ll>dp(1000001);

void tori(int n){
    for(int i=4;i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%mod;
    }
}

int main(){
    int n; cin>>n;
    
    dp[1]=0;dp[2]=0;dp[3]=1;
    tori(n);
    cout<<dp[n]<<endl;
}

