#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n,i;cin>>n;
    vector<int>a(n);
    vector<int>A(100001);
    ll S=0;
    for(int i=0;i<n;i++){cin>>a[i];S+=a[i];A[a[i]]++;}
    int q;cin>>q;
    for(i=0;i<q;i++){
        int b,c;cin>>b>>c;
        ll count=A[b];A[b]=0;A[c]+=count;
        S+=(c-b)*count;
        cout<<S<<endl;
    }
}