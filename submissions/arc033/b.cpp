#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int na,nb;cin>>na>>nb;
    set<int>a,b;
    rep(i,na){int t;cin>>t;a.insert(t);}
    long double div=0;
    rep(i,nb){
        int t;cin>>t;
        if(a.find(t)!=a.end())div++;
        b.insert(t);
    }
    long double s=a.size()+b.size()-div;
    long double jac=div/s;
    cout<<setprecision(18)<<jac<<endl;
}
