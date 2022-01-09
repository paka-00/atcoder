#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n;cin>>n;
    ll div=n+1;
    div*=2;
    ll a=sqrt(div)-1;
    while(a*(a+1)>=div)a-=1;
    while((a+1)*(a+2)<=div)a+=1;
    cout<<n-a+1<<endl; 
}
