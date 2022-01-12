#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

bool isPrime(ll n){
    if(n<2)return false;
    else if(n==2)return true;
    else if(n%2==0)return false;
    long double sqrtn=sqrt(n);
    for(ll i=3;i<=sqrtn;i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    ll n;cin>>n;
    if(isPrime(n)){
        cout<<"Prime"<<endl;
    }
    else if(n!=1&&n%2!=0&&n%3!=0&&n%5!=0){
        cout<<"Prime"<<endl;
    }
    else cout<<"Not Prime"<<endl;
    return 0;
}

