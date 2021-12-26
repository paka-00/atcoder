#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n;cin>>n;
    vector<int>a(n);
    int i;
    for(i=0;i<n;i++)cin>>a[i];
    ll odd=1;
    for(i=0;i<n;i++){
        if(a[i]%2==0)odd*=2;
    }
    ll ans=pow(3,n)-odd;
    cout<<ans<<endl;
}