#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)


int main(){
    ll n;cin>>n;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    sort(a.begin(),a.end());
    vector<bool>root(n+1);
    ll q;cin>>q;
    rep(i,q){
        ll b;cin>>b;
        ll left=0;ll right=n-1;
        ll m=(left+right)/2;
        root.assign(n,false);
        while(left!=right&&!root[m]){
            root[m]=true;
            if(a[m]<b){
                left=m;
            }
            else{
                right=m;
            }
            m=(left+right)/2;
        }
        cout<<min(abs(a[left]-b),abs(a[right]-b))<<endl;
    }
}
