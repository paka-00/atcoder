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
    int n;cin>>n;
    vl l(n);rep(i,n)cin>>l[i];
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int m=max({l[i],l[j],l[k]});
                ll sum=l[i]+l[j]+l[k]-m;
                if(m<sum&&l[i]!=l[j]&&l[i]!=l[k]&&l[j]!=l[k])ans++;
            }
        }
    }    
    cout<<ans<<endl;
}

