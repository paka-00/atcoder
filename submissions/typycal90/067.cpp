#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

string eight_to_nine(string s){
    ll n=0,t=1;
    for(int i=s.size()-1;i>=0;i--){
        n+=(s[i]-'0')*t;
        t*=8;
    }
    string nine;
    while(n>0){
        string str=to_string(n%9);
        if(str=="8")str="5";
        nine=str+nine;
        n/=9;
    }
    if(nine.size()==0)nine="0";
    return nine;

}
int main(){
    string n;cin>>n;
    int k;cin>>k;
    rep(i,k){
        n=eight_to_nine(n);
    }
    cout<<n<<endl;
}