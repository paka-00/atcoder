#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)


int main(){
    int n,x;cin>>n>>x;
    vector<int>a(n),b(n);
    rep(i,n)cin>>a[i]>>b[i];
    vector<vector<bool>> dp(n+1,vector<bool>(x+1));
    dp[0][0]=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<=x;j++){
            if(dp[i][j]){
                if(j+a[i]<=x)
                dp[i+1][j+a[i]]=true;
                if(j+b[i]<=x)
                dp[i+1][j+b[i]]=true;
            }
        }
    }
    if(dp[n][x])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}