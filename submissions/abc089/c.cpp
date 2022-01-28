#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    ll ans=0;
    vector<int>m(5);
    for(ll i=0;i<n;i++){
        string s;cin>>s;
        if(s[0]=='M')m[0]++;
        else if(s[0]=='A')m[1]++;
        else if(s[0]=='R')m[2]++;
        else if(s[0]=='C')m[3]++;
        else if(s[0]=='H')m[4]++;
    }
    vector<bool>b(5);
    b={false,false,false,true,true};
    do{
        ll temp=1;
        for(ll i=0;i<5;i++){
            if(!b[i])temp*=m[i];
        }
        ans+=temp;
    }while (next_permutation(b.begin(),b.end()));
    
    cout<<ans<<endl;
}

