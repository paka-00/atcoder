#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int n;cin>>n;
    vector<vector<int>>a(n+1,vector<int>(n+1));
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    int m;cin>>m;
    vector<vector<bool>>x(n+1,vector<bool>(n+1));
    for(i=0;i<m;i++){
        int t,k;
        cin>>t>>k;
        x[t][k]=true;
        x[k][t]=true;
    }
    vector<int>d;
    for(i=0;i<n;i++)d.push_back(i+1);
    int ans=10010;
    do{
        int m=0;
        bool isok=true;
        for(int i=1;i<=n;i++){
            if(i<n){
            if(x[d[i-1]][d[i]]||x[d[i]][d[i-1]])isok=false;}
            m+=a[d[i-1]][i];
        }
        
        if(isok)ans=min(m,ans);
        
    }while(next_permutation(d.begin(),d.end()));
    if(ans==10010)cout<<-1<<endl;
    else cout<<ans<<endl;
}