#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n;cin>>n;
    int m=2025-n;
    vector<pair<int,int>> ans;
    for(int i=1;i<10;i++){
        if(m%i==0&&m/i<10)ans.push_back({i,m/i});
    }
    for(auto v:ans)
        cout<<v.first<<" x "<<v.second<<endl;
}