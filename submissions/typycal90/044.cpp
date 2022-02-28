#include <bits/stdc++.h>
using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll n,q;cin>>n>>q;
    ll r=-1;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    ll x,y;
    for(ll i=0;i<q;i++){
        int t;cin>>t;
        cin>>x>>y;
        if(t==1){   
            swap(a[(x+r)%n],a[(y+r)%n]);
        }
        else if(t==2){
            r=(r-1+n)%n;
        }
        else cout<<a[(x+r+n)%n]<<endl;
    }

}


