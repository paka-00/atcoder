#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    int n,m,x;cin>>n>>m>>x;
    vector<int>c(n);
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        cin>>c[i];
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    int ans=1000000000;
    for(int bit=0;bit<(1<<n);bit++){
        bool isok=true;
        int tmp=0;
        vector<int>b(m,0);
        for(int i=0;i<n;i++){
            if(bit&(1<<i)){
                tmp+=c[i];
                for(int j=0;j<m;j++){
                    b[j]+=a[i][j];
                }
            }
        }
        for(auto v:b){if(v<x)isok=false;}
        if(isok)ans=min(ans,tmp);
    }
    if(ans==1000000000)cout<<-1<<endl;
    else cout<<ans<<endl;
}