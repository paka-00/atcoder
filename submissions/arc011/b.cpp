#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

std::string toLower(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    return s;
}

string solve(string s){
    string str;
    for(auto c:s){
        if(c=='b' || c=='c')str+='1';
        else if(c=='d' || c=='w')str+= '2';
        else if(c=='t' || c=='j')str+= '3';
        else if(c=='f' || c=='q')str+= '4';
        else if(c=='l' || c=='v')str+= '5';
        else if(c=='s' || c=='x')str+= '6';
        else if(c=='p' || c=='m')str+= '7';
        else if(c=='h' || c=='k')str+= '8';
        else if(c=='n' || c=='g')str+= '9';
        else if(c=='z' || c=='r')str+= '0';
    }
    return str;
}

int main(){
    ll n;cin>>n;
    vector<string>w(n);
    vector<string>ans;
    rep(i,n){
        string s;cin>>s;
        w[i]=toLower(s);
        string str=solve(w[i]);
        if(str.size()!=0)
            ans.push_back(str);
    }
    if(ans.size()>0){
        for(int i=0;i<ans.size()-1;i++){
            cout<<ans[i]<<" ";
        }
        cout<<ans[ans.size()-1];
    }
    cout<<endl;

    
}