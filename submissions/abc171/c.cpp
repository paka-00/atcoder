#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

string a="zabcdefghijklmnopqrstuvwxy";
int main(){
    ll n;cin>>n;
    string ans;ans+=a[n%26];
    while(n>1){
        ans=a[n%26]+ans;
        n/=26;
    }
    cout<<ans<<endl;
}

