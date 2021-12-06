#include <bits/stdc++.h>
template<class T> inline bool chM(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int collaz(int a){
    if(a%2==0)return a/2;
    else return 3*a+1;
}

int main(){
    int s;cin>>s;
    int ans=1;
    set <int> x;
    while(x.find(s)==x.end()){
        ans++;
        x.insert(s);
        s=collaz(s);

   }
    cout<<ans<<endl;
}