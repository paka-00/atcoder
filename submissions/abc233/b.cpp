#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;


int main(){
    int l,r;cin>>l>>r;
    l-=1;
    r-=1;
    string s;cin>>s;
    int n=s.size();
    string ans;
    string rev;
    string R;
    for(int i=0;i<n;i++){
        if(i<l){ans+=s[i];}
        else if(i<=r)rev+=s[i];
        else R+=s[i];
    }
    string t(rev.rbegin(),rev.rend());
    cout<<ans+t+R<<endl;
}


