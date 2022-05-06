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
    bool weak=false;
    if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3])weak=true;
    else{
        weak=true;
    
        for(int i=0;i<3;i++){
            int n1=s[i]-'0';
            int n2=s[i+1]-'0';
            if(n2-n1!=1&&n2-n1!=-9)weak=false;
        }
    }
    if(weak)cout<<"Weak"<<endl;
    else cout<<"Strong"<<endl;
    return 0;
}