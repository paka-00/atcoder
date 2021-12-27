#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll a,b,c;cin>>a>>b>>c;
    for(int i=1;i<=b;i++){
        ll t=a*i;
        if(t%b==c){cout<<"YES"<<endl;return 0;}
    }
    cout<<"NO"<<endl;
    return 0;
}