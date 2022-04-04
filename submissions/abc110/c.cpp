#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)


int main(){
    string s,t;cin>>s>>t;
    vector<vector<bool>>z(26,vector<bool>(26));
    map<char,char>m;
    int n=s.size();
    bool isok=true;
    for(int i=0;i<n;i++){
        int a=s[i]-'a',b=t[i]-'a';
        z[a][b]=true;
    }
    for(int i=0;i<26;i++){
        int c=0;
        for(int j=0;j<26;j++){
            if(z[i][j])c++;
            if(c>1)isok=false;
        }
    }
    for(int i=0;i<26;i++){
        int c=0;
        for(int j=0;j<26;j++){
            if(z[j][i])c++;
            if(c>1)isok=false;
        }
    }
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
