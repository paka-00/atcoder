#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    int n,k;cin>>n>>k;
    int r,s,p;cin>>r>>s>>p;
    string t;cin>>t;
    vector<string> dp(101010);
    rep(i,n)dp[i%k]+=t[i];
    int ans=0;
    rep(i,k){
        int R=0,S=0,P=0;
        int m=dp[i].size();
        if(dp[i][0]=='r')P=p;
        if(dp[i][0]=='s')R=r;
        if(dp[i][0]=='p')S=s;
        for(int j=1;j<m;j++){
            int rr=max(S,P);
            int ss=max(P,R);
            int pp=max(R,S);
            if(dp[i][j]=='r')pp+=p;
            if(dp[i][j]=='s')rr+=r;
            if(dp[i][j]=='p')ss+=s;
            R=rr;
            P=pp;
            S=ss;
        }
        ans+=max({R,S,P});
    }
    cout<<ans<<endl;
    
}

