#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n,m;cin>>n>>m;
    ll ans=0;
    vector<vector<int>>d(m);
    for(int i=0;i<m;i++){
        int k;cin>>k;
        for(int j=0;j<k;j++){
            int s;cin>>s;
            d[i].push_back(s-1);
        }
    }
    vector<bool>on(n);
    vector<int>p(m);
    for(int i=0;i<m;i++)cin>>p[i];
    for(int bit=0;bit<(1<<n);bit++){

        on.assign(n,false);
        for(int i=0;i<n;i++){
            if(bit&(1<<i)){
                on[i]=true;

            }
        }
        bool isok=true;
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<d[i].size();j++){
                if(on[d[i][j]])sum++;
            }
            if((sum)%2!=p[i])isok=false;

        }
        if(isok)ans++;
    }
    cout<<ans<<endl;
}
