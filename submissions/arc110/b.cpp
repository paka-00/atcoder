#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    string t;cin>>t;
    string str="110";
    ll ans;bool zero=false;
    int one=0;
    for(int i=0;i<n;i++){
        if(t[i]=='1'){
            if(one>1)zero=true;
            one++;
        }
        else{
            if(one<2&&i>1)zero=true;
            if(i!=0&&one==0)zero=true;
            one=0;
        }
        //cout<<i<<" "<<one<<"  "<<zero<<endl;
    }
    if(zero)ans=0;
    else if(t=="1")ans=20000000000;
    else if(t=="11")ans=10000000000;
    else{
        int a=0;
        for(auto v:t)if(v=='0')a++;
        if(t[n-1]=='0')ans=10000000000-a+1;
        else ans=10000000000-a;
    }
    cout<<ans<<endl;
}