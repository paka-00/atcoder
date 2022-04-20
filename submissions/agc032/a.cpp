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
    int n;cin>>n;vl b(n);
    rep(i,n)cin>>b[i];
    deque<ll> ans;
    bool isok=true;
    while(b.size()>0){
        bool c=false;
        for(int i=b.size()-1;i>=0;i--){
            if(b[i]==i+1){
                ans.push_front(b[i]);
                b.erase(b.begin()+i);
                c=true;
                break;
                }
        }
        if(!c){
            isok=false;
            break;
        }
    }
    if(isok){
        while(!ans.empty()){
            cout<<ans.front()<<endl;
            ans.pop_front();
        }
    }
    else cout<<-1<<endl;
}