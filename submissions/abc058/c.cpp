#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
    int n;cin>>n;
    string tmp;
    vector<int>p(26);
    vector<int>ans(26);
    rep(i,n){
        p.assign(26,0);
        string str;cin>>str;
        for(auto v:str){
            if(i==0)ans[v-'a']++;
            p[v-'a']++;
        }
        for(int j=0;j<26;j++){
            ans[j]=min(ans[j],p[j]);
        }
        
    }
    for(int l=0;l<26;l++){
        for(int i=0;i<ans[l];i++){
            cout<<char('a'+l);
        }
    }
    cout<<endl;
    
}
