#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int n,k,i;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b(n),c(n),d(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    ll tmp=0;
    for(i=0;i<n;i++){
        tmp+=abs(a[i]-b[i]);
    }
    if(k>=tmp&&(abs(k-tmp))%2==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}