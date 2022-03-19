#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = unsigned long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    string s;getline(cin,s);
    ll n=s.size();
    set<string>ans;
    string name="";
    for(ll i=0;i<n-1;i++){
        if(s[i]=='@'){
            i++;
            name="";
            while(s[i]!=' '&&i<n){
                if(s[i]!='@')
                    name+=s[i];
                else {
                    if(name.length()>0)
                        ans.insert(name);
                    name="";
                }
                i++;
            }
            if(name.length()>0)
                ans.insert(name);
        }
    }

    for(auto v:ans){
        cout<<v<<endl;
    }
}
