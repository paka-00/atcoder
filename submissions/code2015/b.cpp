#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    string t,u;
    if(n%2!=0){cout<<-1<<endl;return 0;}
    t=s.substr(0,n/2);
    u=s.substr(n/2,n);
    int ans=0;
    for(int i=0;i<n/2;i++){
        if(t[i]!=u[i])ans++;
    }cout<<ans<<endl;
}