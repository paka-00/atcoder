#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int m;cin>>m;
    string ans;
    if(m<100)ans="00";
    else if(m<=5000){
        m/=100;
        if(m<10)ans+="0";
        ans+=to_string(m);
    }
    else if(m<=30000){
        m/=1000;
        m+=50;
        ans=to_string(m);
    }
    else if(m<=70000){
        m/=1000;
        m-=30;
        m/=5;
        m+=80;
        ans=to_string(m);
    }
    else{
        ans="89";
    }
    cout<<ans<<endl;
}
