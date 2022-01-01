#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=unsigned long long;


int main(){
    int n,q;cin>>n>>q;
    int i,j;
    vector<vector<int>> G(n+1);
    for(i=1;i<n;i++){
        ll a,b;cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int>f(n+1,-1);
    f[1]=0;
    queue<int> que;
    que.push(1);
    while(!que.empty()){
        i=que.front();
        que.pop();
        for(auto v:G[i]){
            if(f[v]==-1){
                f[v]=f[i]+1;
                que.push(v);
            }
        }
    }
    for(i=0;i<q;i++){
        int c,d;cin>>c>>d;
        if(f[c]%2==f[d]%2)cout<<"Town"<<endl;
        else cout<<"Road"<<endl;
    }
}