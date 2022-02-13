#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

bool isok(vector<char>a){
    int t=0;
    for(auto v:a){
        if(v==')')t--;
        else t++;
        if(t<0)return false;
    }
    return true;
}
int main(){
    int n;cin>>n;
    if(n%2==1)return 0;
    int t=n/2;
    vector<char> s;
    rep(i,t){s.push_back('(');s.push_back(')');}
    sort(s.begin(),s.end());
    do{
        if(isok(s)){for(auto v:s)cout<<v;cout<<endl;}
    }while(next_permutation(s.begin(),s.end()));
}