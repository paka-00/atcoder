#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
const ll mod=100000;

int digit_sum(ll n){
   if(n < 10)  return n;
   return digit_sum(n/10) + n%10;
}

ll calc(ll x){
    ll y=digit_sum(x);
    return (x+y)%mod;
}

int main(){
    ll n,k;cin>>n>>k;
    ll i;
    ll x=n;
    vector<int>a(100000);
    a.assign(100000,0);
    vector<int>ans;
    ll l=1;
    bool cnt=false;
    ll temp;
    ans.push_back(x);
    a[x]=l;l++;
    for(i=1;i<=k;i++){
            x=calc(x);
            if(a[x]!=0){
                cnt=true;
                break;
            }
            ans.push_back(x);
            a[x]=l;
            l++;
    }
    ll r=k-i,s=i-a[x]+1;
    if(cnt){
        x=ans[a[x]+r%s-1];
    }
    cout<<x<<endl;
} 

