#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    ll n;cin>>n;
    vector<int>a(n+1);
    for(ll i=1;i<=n;i++)cin>>a[i];
    ll ans=0;
    ll right=1,left=1;
    for(left=1;left<=n;left++){
        while(right<n){
            if(a[right]>=a[right+1])break;
            right++;
        }
        //cout<<left<<" "<<right<<endl;
        ans+=right-left+1;
        if(left==right&&right<n)right++;
    }
    cout<<ans<<endl;
}

