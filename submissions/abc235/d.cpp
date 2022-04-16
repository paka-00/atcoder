#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)



int main(){
    ll a,n;cin>>a>>n;
    ll ans=LONG_LONG_MAX;
    ll tmp;
    
    
    string str="1";
    tmp=to_string(n).size();
    ll M=1;
    while(M<=n)M*=10;
    vector<ll>num(M,LONG_LONG_MAX);
    queue<ll>q;
    num[1]=0;
    q.push(1);
    while(!q.empty()){
        ll c=q.front();q.pop();
        ll dc=num[c];
        ll p1=a*c;
        if(p1<M and c%10!=0){
            num[p1]=min(dc+1,num[p1]);
            q.push(p1);
        }
        if(c>=10 and c%10!=0){
            string s=to_string(c);
            ll t=s.size();
            char c=s[t-1];
            s=c+s;
            s.erase(t);
            ll p2=stoll(s);
            if(p2<M and num[p2]==LONG_LONG_MAX){
                num[p2]=min(dc+1,num[p2]);
                q.push(p2);
            }
        }
        
    }
    if(num[n]==LONG_LONG_MAX)cout<<-1<<endl;
    else cout<<num[n]<<endl;
}

