#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n;cin>>n;
    vector<ll>a(n);
    int i,j;
    for(i=0;i<n;i++)cin>>a[i];
    deque<ll>b;
    for(i=0;i<n;i++){
        if(i%2==0){
            b.push_back(a[i]);
        }
        else{
            b.push_front(a[i]);
        }
    }
    if(n%2==0){
        for(auto v:b)cout<<v<<" ";cout<<endl;
    }
    else{
        for(i=n-1;i>=0;i--)cout<<b[i]<<" ";cout<<endl;
    }
}

