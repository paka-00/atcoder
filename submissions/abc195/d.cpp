#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int n,m,q;cin>>n>>m>>q;
    vector<pair<ll,ll>>a;
    rep(i,n){
        ll w,v;cin>>w>>v;
        a.push_back({v,w});
    }
    // value,weight
    sort(a.begin(),a.end(),greater<pair<ll,ll>>());
    vector<ll>x(m);
    rep(i,m)cin>>x[i];
    for(int i=0;i<q;i++){
        int l,r;cin>>l>>r;l--;r--;
        ll ans=0;
        vector<ll>b;
        for(int j=0;j<l;j++)b.push_back(x[j]);
        for(int j=r+1;j<m;j++)b.push_back(x[j]);
        sort(b.begin(),b.end());
        for(auto v:a){
            auto it=lower_bound(b.begin(),b.end(),v.second);
            if(it!=b.end()){
                ans+=v.first;
                b.erase(it);
            }
        }
        //for(auto v:b)cout<<v<<" ";cout<<endl;
        cout<<ans<<endl;
    }
}
