#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)


int main(){
    ll n;cin>>n;
    vector<pair<ll,ll>>z(n);
    map<ll,vector<pair<ll,ll>>>a;
    rep(i,n){
        int x,y;cin>>x>>y;
        z[i]={x,y};
        a[y].push_back({x,i});
    }
    string s;cin>>s;
    bool col=false;
    for(auto v=a.begin();v!=a.end();v++){
      sort(v->second.begin(),v->second.end());
      bool r=false;
        for(int i=0;i<v->second.size();i++){
            if(!r&&s[v->second[i].second]=='R')r=true;
            else if(!r &&s[v->second[i].second]=='L')continue;
            else if(r&&s[v->second[i].second]=='L')col=true;
        }
    }
    if(col)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}