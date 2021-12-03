#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using namespace std;

int main(){
    string n;
    cin>>n;
    long x=0;
    long f=0;
    for(auto v:n){
        f+=v-'0';
        x=10*x+v-'0';
    }
    if(x%f==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

