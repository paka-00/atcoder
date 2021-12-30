#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=unsigned long long;

int main(){
   ll n,t;cin>>n>>t;
   ll a,b;
   ll ans=0;
   cin>>a;
   for(ll i=1;i<n;i++){
       cin>>b;
       ans+=min(t,b-a);
       a=b;
   }
   ans+=t;
   cout<<ans<<endl;
}