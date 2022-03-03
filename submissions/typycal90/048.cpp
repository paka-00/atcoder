#include <bits/stdc++.h>
using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll n,k;cin>>n>>k;
    priority_queue<ll>a;

    for(int i=0;i<n;i++){
        ll t1,t2;cin>>t1>>t2;
        a.push(t2);
        a.push(t1-t2);
    }
    ll ans=0;
    rep(i,k){
        ans+=a.top();
        a.pop();
    }
    
    cout<<ans<<endl;
}


