#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n,k;cin>>n>>k;
    int i;
    vector<int> a(n+1);
    for(i=0;i<n;i++){
        int b;cin>>b;
        a[b]++;
    }
    sort(a.begin(),a.end(),greater<int>());
    int ans=0;
    while(a[k]!=0){
        ans+=a[k];
        k++;
    }
    cout<<ans<<endl;

}