#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    vector<bool>a(2*n+1);
    ll k=a.size();
    a[0]=true;
    ll temp;
    ll next=1;
    while(next<=k){
            cout<<next<<endl;
            a[next]=true;
            cin>>temp;a[temp]=true;
            if(temp==0)return 0;
            while(a[next]){next++;}
    }
    return 0;
}