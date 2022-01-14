#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    bool A=false,B=false,C=false;
    if(a%2==0)A=true;
    if(b%2==0)B=true;
    if(c%2==0)C=true;
    if(A||B||C){
        cout<<0<<endl;
    }
    else{
        vector<ll>m;
        m.push_back(a);
        m.push_back(b);
        m.push_back(c);
        sort(m.begin(),m.end());
        cout<<m[0]*m[1]<<endl;
    }
}

