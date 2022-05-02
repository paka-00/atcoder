#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    int n,m;cin>>n>>m;
    vector<string>a(n),b(m);
    string str;
    rep(i,n){
        cin>>str;
        a[i]=str;
    }
    rep(i,m){
        cin>>str;
        b[i]=str;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            bool isok=true;
            for(int l=0;l<m;l++){
                if(i+l>=n){
                    isok=false; 
                }
                else 
                if(a[i+l].substr(j,m)!=b[l])
                    isok=false;
            }
            if(isok){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
}