#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n,m;cin>>n>>m;
    vector<pair<int,int>>con;
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        con.push_back({a,b});
    }
    int k;cin>>k;
    vector<pair<int,int>>t;
    string b;
    for(int i=0;i<k;i++){
        int c,d;cin>>c>>d;
        t.push_back({c,d});
        b+='0';
    }
    ll ans=0;
    vector<bool>ball(n+1);
    for(int bit=0;bit<(1<<k);bit++){
        ball.assign(n+1,false);
        ll temp=0;
        
        for(int i=0;i<k;i++){
            if(bit&(1<<i)){
                ball[t[i].first]=true;
            }
            else{
                ball[t[i].second]=true;
            }
        }
        for(int j=0;j<m;j++){
            if(ball[con[j].first]&&ball[con[j].second]){
                temp++;
            }
        }
        ans=max(ans,temp);
    }
    cout<<ans<<endl;
    
}
