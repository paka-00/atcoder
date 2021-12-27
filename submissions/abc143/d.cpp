#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n;cin>>n;
    vector<int>l(n);
    int i,j,k;
    for(i=0;i<n;i++)cin>>l[i];
    sort(l.begin(),l.end());
    ll ans=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(l[i]+l[j]>l[k])ans++;
            }
        }
    }
    cout<<ans<<endl;
}