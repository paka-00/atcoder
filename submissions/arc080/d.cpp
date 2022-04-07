#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int h,w,n;

int main(){
    cin>>h>>w>>n;
    vector<pair<int,int>>a(n);
    rep(i,n){
        int t;cin>>t;
        a[i]={t,i+1};
    }
    sort(a.begin(),a.end(),greater<pair<int,int>>());
    vector<vector<int>>ans(h,vector<int>(w));
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i].first;j++){
            ans[s/w][s%w]=a[i].second;
            s++;
        }
    }
    for(int i=0;i<h;i++){
        if(i%2==0){
            for(int j=0;j<w;j++){cout<<ans[i][j]<<" ";}
        }
        else {
            for(int j=w-1;j>=0;j--){cout<<ans[i][j]<<" ";}
        }
        cout<<endl;
    }
}
    
