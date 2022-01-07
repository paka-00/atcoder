#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    int i;
    ll ans=0;
    vector<int>a(4);
    for(i=0;i<n;i++){
        a.assign(4,0);
        for(int j=i;j<n;j++){
            if(s[j]=='A')a[0]++;
            else if(s[j]=='T')a[1]++;
            else if(s[j]=='G')a[2]++;
            else a[3]++;
            if(a[0]==a[1]&&a[2]==a[3])ans++;
        }
    }
    cout<<ans<<endl;
}
