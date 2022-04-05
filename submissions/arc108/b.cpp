#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;



int main(){
    int n;cin>>n;
    deque<char>s;
    for(int i=0;i<n;i++){
        char c;cin>>c;
        s.push_back(c);
    }
    string tmp;
    while(!s.empty()){
        tmp+=s.front();
        s.pop_front();
        if(tmp.size()>=3){
            if(tmp.substr(tmp.size()-3)=="fox"){
                tmp=tmp.substr(0,tmp.size()-3);
            }
        }

    }
    
    cout<<tmp.size()<<endl;
}
