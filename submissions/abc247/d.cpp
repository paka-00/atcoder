#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;

int main(){
    ll q;cin>>q;
    deque<pair<ll,ll>>ans;
    //fがsecond個
    rep(i,q){
        ll t,x,c;
        cin>>t;
        if(t==1){
            cin>>x>>c;
            ans.push_back({x,c});
        }
        else{
            cin>>c;
            ll sum=0;
            while(!ans.empty()&&c>0){
                pair<ll,ll> a;
                a=ans.front();
                if(a.second<=c){
                    sum+=a.first*a.second;
                    c-=a.second;
                    ans.pop_front();
                }
                else{
                    sum+=a.first*c;
                    ll k=a.second-c;
                    c=0;
                    ans.pop_front();
                    ans.push_front({a.first,k});
                }
                
            }
            cout<<sum<<endl;
        }
    }
}

