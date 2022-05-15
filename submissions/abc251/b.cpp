#include <bits/stdc++.h>
#include <cassert>

template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
 
using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using ld=long double;
using pll =pair<ll,ll>;
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
#define ssort(a)sort(a.begin(),a.end());
const ll mod=1000000007;

int main(){
    int n,w;cin>>n>>w;
    vl a(n);rep(i,n)cin>>a[i];
    set<ll> ans;
    for(int i=0;i<n;i++){
        if(a[i]<=w)
            ans.insert(a[i]);
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]<=w)
                ans.insert(a[i]+a[j]);
            for(int l=j+1;l<n;l++){
                if(a[i]+a[j]+a[l]<=w)
                    ans.insert(a[i]+a[j]+a[l]);
            }
        }
    }
    cout<<ans.size()<<endl;
}

