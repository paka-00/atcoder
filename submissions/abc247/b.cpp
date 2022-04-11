#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    int n;cin>>n;
    set<string>name;
    set<string>dame;
    vector<pair<string,string>>a(n);
    bool isok=true;
    rep(i,n){
        string str,s;cin>>str>>s;
        //ないなら
        if(name.find(str)!=name.end()){
            dame.insert(str);
        }
        if(name.find(s)!=name.end()){
            dame.insert(s);
        }
        name.insert(str);name.insert(s);
        a[i]={str,s};
    }
    rep(i,n){
        if(dame.find(a[i].first)!=dame.end()&&dame.find(a[i].second)!=dame.end())
        isok=false;
    }
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

