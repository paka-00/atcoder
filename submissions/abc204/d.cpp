#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)


int main(){
    ll n;cin>>n;
    vector<ll>t(n);
    ll sum=0;
    rep(i,n){
        cin>>t[i];
        sum+=t[i];
    }

    vector<vector<bool>>dp(n+1,vector<bool>(sum));
    dp[0][0]=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<=sum;j++){
            dp[i+1][j]=dp[i][j]||dp[i+1][j];
            if(j+t[i]<=sum){
                dp[i+1][j+t[i]]=dp[i][j]||dp[i+1][j+t[i]];
            }
        }
    }
    for(int j=(sum+1)/2;j<=sum;j++){
        if(dp[n][j]){
            cout<<j<<endl;
            break;
        }
    }
    return 0;
}
//Tからiこを選んで和を j にできるか