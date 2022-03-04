#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)


int main(){
    int n;cin>>n;
    vector<vector<int>>A(n,vector<int>(6));
    int i,j;
    ll ans=1;
    ll mod=1000000007;
    for(i=0;i<n;i++){
        int a=0;
        for(j=0;j<6;j++){
            int t;cin>>t;
            a+=t;
        }ans=ans*a;
    }
    cout<<ans<<endl;
} 

