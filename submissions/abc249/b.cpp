#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    string s;cin>>s;
    set<char>a;
    bool isl=false,iss=false,isok=true;
    for(auto v:s){
        
        if('a'-0<=v&&v<='z'-0)iss=true;
        if('A'-0<=v&&v<='Z'-0)isl=true;
        if(a.find(v)!=a.end())isok=false;
        a.insert(v);
    }
    if(iss&&isl&&isok){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}