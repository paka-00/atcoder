#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}
uintmax_t combination(unsigned int n, unsigned int r) {
  if ( r * 2 > n ) r = n - r;
  uintmax_t dividend = 1;
  uintmax_t divisor  = 1;
  for ( unsigned int i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
  }
  return dividend / divisor;
}

int main(){
    string s;cin>>s;
    int ans=0;
    int i;
    int o=0;int q=0;
    for(i=0;i<=9999;i++){
        vector<bool>a(10);
        int x=i;
        for(int j=0;j<4;j++){
            a[x%10]=true;
            x/=10;
        }
        bool ok=true;
        for(int j=0;j<10;j++){
            if(s[j]=='o'&&!a[j])ok=false;
            else if(s[j]=='x'&&a[j])ok=false;
        }
        if(ok)ans++;
    }
   
    cout<<ans<<endl;
}