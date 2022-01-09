#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;


int main(){
    int n;cin>>n;
    vector<int>x(n);
    vector<int>y(n);
    int i,j;
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    long double m=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            long double d=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
            if(d>m)m=d;
        }
    }
    cout<<setprecision(16)<<m<<endl;
}
