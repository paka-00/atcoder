#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
    ll n;cin>>n;
    ll sum=0;
    vector<ll>a(n);
    rep(i,n){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    long double ans=0;
    vector<long double>dp(n);
    long double k;
    if(n%2==1)
    k=a[n/2];
    else k=(a[n/2]+a[(n/2)-1])/2;
    rep(i,n){
        dp[i]=k/2+a[i]-min(a[i],(ll)k);
        ans+=dp[i];
    }
    ans/=n;
    cout<<setprecision(18)<<ans<<endl;
}

