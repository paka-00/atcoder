#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n;cin>>n;
    vector<ll>a(n);
    vector<ll>b(n+1);
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    vector<ll>c(n+1);
    ll d=0;
    for(i=1;i<=n;i++){
        if(b[i]>1){
            c[i]=b[i]*(b[i]-1)/2-(b[i]-1)*(b[i]-2)/2;
            d+=b[i]*(b[i]-1)/2;
        }
    }
    ll ans;
    for(i=0;i<n;i++){
        ans=d-c[a[i]];
        cout<<ans<<endl;
    }
}