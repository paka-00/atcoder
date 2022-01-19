#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    int n;cin>>n;
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    ll ans=0;
    int i=0,c=1;
    while(c<n){
        if(a[i]==2){
            cout<<c<<endl;
            break;
        }
        else{
            i=a[i]-1;
        }
        c++;
        if(c==n){
            cout<<-1<<endl;
            break;
        }
    }

}

