#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n,i;cin>>n;
    string s;cin>>s;
    int q;cin>>q;
    bool sw=false;
    for(i=0;i<q;i++){
        int t,a,b;
        cin>>t>>a>>b;
        if(t==1&&!sw)swap(s[a-1],s[b-1]);
        else if(t==1&&sw)swap(s[(a-1+n)%(2*n)],s[(b-1+n)%(2*n)]);
        else{
            if(sw)sw=false;
            else sw=true;
        }
    }
    if(sw){
        string t=s.substr(n,n);
        t+=s.substr(0,n);
        cout<<t<<endl;
        return 0;
    }
    else 
    cout<<s<<endl;
}