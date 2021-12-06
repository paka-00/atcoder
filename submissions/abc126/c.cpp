#include <bits/stdc++.h>
template<class T> inline bool chM(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n,k;cin>>n>>k;
    long double ans=0;
    long double a;
    for(int i=1;i<=n;i++){
        a=1.0/n;
        int b=i;
        while(b<k){
            b*=2;
            a/=2;
        }
        ans+=a;
    }


    cout<<setprecision(10)<<ans<<endl;
}

