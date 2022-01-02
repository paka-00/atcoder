#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n;cin>>n;
    string s,t;cin>>s>>t;
    int k,l;
    k=s.size();
    l=t.size();
    int i,j,ans;
    ans=2*n;
    for(i=0;i<=n;i++){
        if(s.substr(i)==t.substr(0,n-i)){ans=i+n;break;}
    }
    cout<<ans<<endl;
}