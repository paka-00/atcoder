#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    string s;cin>>s;
    int n=s.size();
    int ans=999;
    for(int i=0;i<n-2;i++){
        int t=(s[i]-'0')*100+(s[i+1]-'0')*10+(s[i+2]-'0');
        ans=min(ans,abs(t-753));
    }
    cout<<ans<<endl;
}

