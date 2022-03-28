#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)


int main(){
    ll n;cin>>n;
    stack<pair<int,int>>q;
    rep(i,n){
        int temp;cin>>temp;
        int num=1;
        if(q.empty())q.push({temp,num});
        else {
            int pret=q.top().first,pren=q.top().second;
            if(pret==temp)num=pren+1;
            q.push({temp,num});
            //cout<<temp<<" "<<pret<<" "<<pren<<endl;
        }
        if(temp==num){
                for(int j=0;j<temp;j++)q.pop();
            }
        cout<<q.size()<<endl;
    }
}