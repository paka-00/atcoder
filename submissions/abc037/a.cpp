#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    for(int i=0;i<=c/a;i++){
        int m=c-a*i;
        ans=max(ans,i+m/b);
    }
    cout<<ans<<endl;
}

