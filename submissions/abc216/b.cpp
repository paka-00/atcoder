#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n;cin>>n;
    set<pair<string,string>> s;
    for(int i=0;i<n;i++){
        string t1,t2;cin>>t1>>t2;
        s.insert({t1,t2});
    }
    cout<<endl;
    if(s.size()!=n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

