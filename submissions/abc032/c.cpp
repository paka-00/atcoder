#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll n,k,i;cin>>n>>k;
    vector<ll>s(n+1);
    bool iszero=false;
    for(i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==0)iszero=true;
    }
    if(iszero){
        cout<<n<<endl;
        return 0;
    }
    
    ll c=0;
    ll right=0;
    ll seki=1;
    for(ll left=0;left<n;left++){
        while(right<n&&seki*s[right]<=k){
            seki*=s[right];
            right++;
        }
        c=max(c,right-left);
        if(left!=right)seki/=s[left];
        else right++;
        
    }
    cout<<c<<endl;
}

