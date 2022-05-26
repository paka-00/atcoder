#include <bits/stdc++.h>
#include <cassert>

template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
 
using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using ld=long double;
using pll =pair<ll,ll>;
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
#define ssort(a)sort(a.begin(),a.end());
#define gsort(a)sort(a.begin(),a.end(),greater<ll>());
const ll mod=1000000007;


int main(){
    set<char>c;c.insert('A');c.insert('T');c.insert('G');c.insert('C');
    string s;cin>>s;
    ll ans=0,tmp=0;
    for(auto v:s){
        if(c.find(v)!=c.end()){
            tmp++;
        }
        else{
            tmp=0;
        }
        chmax(ans,tmp);
    }
    cout<<ans<<endl;
}

