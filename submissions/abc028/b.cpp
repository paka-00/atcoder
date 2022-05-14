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
#define ssort(a)sort(a.begin(),a.end());
const ll mod=1000000007;

int main(){
    string s;cin>>s;
    map<char,ll>m;
    m['A']=0;
    m['B']=0;
    m['C']=0;
    m['D']=0;
    m['E']=0;
    m['F']=0;

    rep(i,s.size()){
        m[s[i]]++;
    }
    
    cout<<m['A']<<" "<<m['B']<<" "<<m['C']<<" "<<m['D']<<" "<<m['E']<<" "<<m['F']<<endl;
}

