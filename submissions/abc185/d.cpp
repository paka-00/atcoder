#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n,m;cin>>n>>m;
    vector<ll>a(m);
    int i;

    for(i=0;i<m;i++){
        cin>>a[i];
    }
    if(m==0){
        cout<<1<<endl;return 0;
    }
    vector<ll>dif(m+1);
    sort(a.begin(),a.end());
    ll ans=0;
    ll k=n;
    for(i=1;i<m;i++){
        if(a[i]-a[i-1]==1)continue;
        chmin(k,a[i]-a[i-1]-1);
    }
    if(a[0]!=1)chmin(k,a[0]-1);
    if(a[m-1]!=n)chmin(k,n-a[m-1]);
    for(i=1;i<m;i++){
        ans+=(a[i]-a[i-1]-1+k-1)/k;
    }
    if(a[0]!=1)ans+=(a[0]-1+k-1)/k;
    if(a[m-1]!=n)ans+=(n-a[m-1]+k-1)/k;
    cout<<ans<<endl;
}
