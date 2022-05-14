#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
 
using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using ld=long double;
using pll =pair<ll,ll>;
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
const ll mod=1000000007;

int main(){
    int n;cin>>n;
    if(n<60)cout<<"Bad"<<endl;
    else if(n<90)cout<<"Good"<<endl;
    else if(n<100)cout<<"Great"<<endl;
    else cout<<"Perfect"<<endl;
}

