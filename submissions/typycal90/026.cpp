#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
vector<vector<int>>G(100001);
vector<int>c(100001);

void dfs(int pos,int col){
    c[pos]=col;
    col*=-1;

    for(int v:G[pos]){
        if(c[v]==0){
        dfs(v,col);}
    }
}

int main(){
    int n;cin>>n;
    int i;
    c.assign(n+1,0);
    for(i=1;i<n;i++){
        int a,b;cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(1,1);
    vector<int>A,B;
    for(i=1;i<=n;i++){
        if(c[i]==1)A.push_back(i);
        else B.push_back(i);
    }

    if(A.size()>B.size()){
        for(i=0;i<n/2;i++)cout<<A[i]<<" ";
    }
    else{
        for(i=0;i<n/2;i++)cout<<B[i]<<" ";
    }
    cout<<endl;
}