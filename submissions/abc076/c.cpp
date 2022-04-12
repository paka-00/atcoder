#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

bool match(string s,string t){
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]&&t[i]!='?')return false;
    }
    return true;
}

int main(){
    string s,t;cin>>s>>t;
    int n=s.size();
    int k=t.size();
    bool isok=false;
    string ans;
    for(int i=n-1;i>=0;i--){
        if(i+k<=n&&match(t,s.substr(i,k))){
            isok=true;
             for(int j=0;j<k;j++){
                 s[i+j]=t[j];
            }
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='?')ans+='a';
        else ans+=s[i];
    }
    if(isok)
    cout<<ans<<endl;
    else cout<<"UNRESTORABLE"<<endl;
}

