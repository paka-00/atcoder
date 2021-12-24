#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    ll n,m,i,j;
    cin>>n>>m;
    vector<pair<ll,ll>>a(n+1);
    vector<pair<ll,ll>>b(m+1);
    ll l,k;
    for(i=0;i<n;i++){
        cin>>l>>k;
        a[i]={l,k};
    }
    for(i=0;i<m;i++){
        cin>>l>>k;
        b[i]={l,k};
    }
    for(i=0;i<n;i++){
        ll d,mi;
        mi=10000000000000;
        int idx=0;
        for(j=0;j<m;j++){
            d=abs(a[i].first-b[j].first)+abs(a[i].second-b[j].second);
            if(d<mi){
                mi=d;
                idx=j+1;
            }
        }
        cout<<idx<<endl;
    }
}