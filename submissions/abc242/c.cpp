#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
const ll mod=998244353;
int main(){
    ll n;cin>>n;
    vector<ll>a(10),b(10);
    for(int i=1;i<=9;i++)a[i]=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=9;j++){
            if(j!=1&&j!=9){
                b[j]=(a[j]+a[j-1]+a[j+1]);
            }
            else if(j==1)b[1]=(a[1]+a[2]);
            else b[9]=(a[9]+a[8]);
        }
        for(int j=1;j<=9;j++){
            a[j]=b[j]%mod;
        }
    }
    ll ans=0;
    for(int i=1;i<10;i++){
        ans=(ans+b[i])%mod;
    }
    cout<<ans%mod<<endl;
}