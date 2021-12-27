#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    string s;cin>>s;
    int i,n;n=s.size();
    vector<int>w;
    for(i=0;i<n;i++){
        if(s[i]=='W')w.push_back(i);
    }
    int k=w.size();
    ll ans=0;
    for(i=0;i<k;i++){
        ans+=w[i]-i;        
    }
    cout<<ans<<endl;
}