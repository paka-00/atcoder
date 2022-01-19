#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    string s;cin>>s;
    int n=s.size();
    bool ans;
    for(int i=0;i<n;){
        if(s[i]=='o'||s[i]=='u'||s[i]=='k'){i++;ans=true;}
        else if(s[i]=='c'&&s[i+1]=='h'){i+=2;ans=true;}
        else{
            cout<<"NO"<<endl;
            ans=false;
            break;
        }
    }
    if(ans)cout<<"YES"<<endl;
}

