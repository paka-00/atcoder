#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;


int main(){
    ll k;cin>>k;
    ll p=sqrt(k)+1;
    string ans;
    while(k!=0){
        ans += ( k % 2 == 0 ? "0" : "2" );
        k/= 2;
    }
    string A(ans.rbegin(),ans.rend());
    cout<<A<<endl;
}
