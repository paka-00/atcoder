#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}


int main(){
    ll n;cin>>n;
    ll a,b,ans;
    ans=1000;
    ll t[n];
    int i;
    for(i=0;i<n;i++)cin>>t[i];
    int c;
    for(c=0;c<16;c++){
        a=0;b=0;
        string s=toBinary(c);
        while(s.size()<n)s='0'+s;
        for(i=0;i<n;i++){
            if(s[i]=='0')a+=t[i];
            else b+=t[i];
        }
        chmin(ans,max(a,b));
    }
    cout<<ans<<endl;
}

