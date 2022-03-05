#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    long double a,b,c,x;cin>>a>>b>>c>>x;
    long double ans=0.0;
    if(x<=a)ans=1.0;
    else if(x>b)ans=0.0;
    else{
        ans=(c)/(b-a);
    }
    cout<<setprecision(18)<<ans<<endl;
}