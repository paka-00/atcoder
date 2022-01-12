#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    string s;ll k;
    cin>>s>>k;
    int n=s.size(),i;
    vector<int>a(n+1);

    if(a[0]=='.')a[0]=1;
    for(i=0;i<n;i++){
        if(s[i]=='.')a[i+1]=a[i]+1;
        else a[i+1]=a[i];
    }
    int l,r=0,ans=0;
    for(l=0;l<n;l++){
        while(r<n&&a[r+1]-a[l]<=k){
            r++;
        }
        chmax(ans,r-l);
    }
 cout<<ans<<endl;
}

