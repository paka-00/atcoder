#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

string z="abcdefghijklmnopqrstuvwxyz";
int main(){
    ll n;cin>>n;
    stack<int>ans;
    while(n){
        n--;
        ans.push(n%26);
        n/=26;
    }
    while(!ans.empty()){
        cout<<z[ans.top()];
        ans.pop();
    }
    cout<<endl;
    return 0;

}

