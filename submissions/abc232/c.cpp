#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;


int main(){
    int n;cin>>n;
    int m;cin>>m;
    int i,a,b,j;
    vector<vector<bool>> t(n+1,vector<bool>(n));
    vector<vector<bool>> s(n+1,vector<bool>(n));
    for(i=0;i<m;i++){
        cin>>a>>b;
        s[a][b]=true;
        s[b][a]=true;
    }
    for(i=0;i<m;i++){
        cin>>a>>b;
        t[a][b]=true;
        t[b][a]=true;
    }
    bool ans=false;
    vector<int>v(n);
    iota(v.begin(),v.end(),1);
    do{
        ans=true;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(s[i][j]!=t[v[i-1]][v[j-1]])
                    ans=false;
            }
        }
        if(ans){cout<<"Yes"<<endl;return 0;}
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(s[i][j]!=t[v[i-1]][v[j-1]])
                    ans=false;
            }
        }
    }
    while(next_permutation(v.begin(),v.end()));
    cout<<"No"<<endl;
}
