#include <bits/stdc++.h>
using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
   ll n,l;cin>>n>>l;
   ll mod=1000000007;
   vector<ll>dp(n+1);
   dp[0]=1;
   for(ll i=1;i<=n;i++){
       if(i<l)dp[i]=dp[i-1];
       else dp[i]=(dp[i-1]+dp[i-l])%mod;
   }
   cout<<dp[n]<<endl;
}


