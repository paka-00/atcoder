#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    string s;cin>>s;
    ll n=s.size();
    vector<pair<ll,ll>>g(n);
    int pre=0,d=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='R'){
            pre=i;
            d=0;
        }
        else{
            d=(d+1)%2;
            g[i]={pre,d};
        }
    }
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='L'){
            pre=i;
            d=0;
        }
        else{
            d=(d+1)%2;
            g[i]={pre,d};
        }
    }
    vector<ll>ans(n);
    for(ll i=0;i<n;i++){
        int dist;
        if(s[i]=='R')dist=-1;
        else dist=1;
        //cout<<g[i].first<<" "<<g[i].second<<" "<<dist<<endl;
        ans[g[i].first+dist*g[i].second]++;
    }
    for(auto v:ans)cout<<v<<" ";cout<<endl;

}
