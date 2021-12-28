#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n;cin>>n;
    vector<int>s(n);
    int i,j;
    ll sum=0;
    for(i=0;i<n;i++){cin>>s[i];sum+=s[i];}
    vector<vector<bool>>dp(n,vector<bool>(100001));
    dp[0][0]=true;
    for(i=0;i<n;i++){
        for(j=0;j<10001;j++){
            dp[i+1][j]=true;
            dp[i+1][j+s[j]]=true;
        }
    }
    int ans=0;
    for(i=0;i<10001;i++){
        if(i%10&&dp[n][i])chmax(ans,i);
    }
    cout<<ans<<endl;
}