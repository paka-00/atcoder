#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
vector<ll>a(1<<18);
map<ll,ll> t;
int main(){
    ll n,k,i;cin>>n>>k;
    
    for(i=1;i<=n;i++)cin>>a[i];
    
    ll ans=0;
    
    ll c=0;
    ll right =1;
    
    for(ll left=1;left<=n;left++){
        while(right<=n){
            if(t[a[right]]==0&&c==k)break;
            if(t[a[right]]==0)c++;
            t[a[right]]++;
            right++;
        }
        ans=max(ans,right-left);
        if(t[a[left]]==1)c--;
        t[a[left]]--;

    }
    cout<<ans<<endl;
}