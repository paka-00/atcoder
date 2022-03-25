#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int n;cin>>n;
    string s;cin>>s;
    long double gpa;
    long double sum=0;
    for(auto v:s){
        if(v=='A')sum+=4;
        else if(v=='B')sum+=3;
        else if(v=='C')sum+=2;
        else if(v=='D')sum+=1;
        else continue;
    }
    gpa=sum/n;
    cout<<setprecision(18)<<gpa<<endl;
    return 0;

}
