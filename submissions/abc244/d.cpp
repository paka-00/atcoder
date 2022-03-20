#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    char s1,s2,s3,t1,t2,t3;
    cin>>s1>>s2>>s3>>t1>>t2>>t3;
    bool isok=false;
    if(s1==t1&&s2==t2&&s3==t3)isok=true;
    else if(s1==t2&&s2==t3&&s3==t1)isok=true;
    else if(s1==t3&&s2==t1&&s3==t2)isok=true;
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}