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
    int n;cin>>n;
    vvl a(n,vl(3));
    vl b(n);
    rep(i,n-1){
        int c,s,f;cin>>c>>s>>f;
        b[i]=s+c;
        for(int j=0;j<i;j++){
            if(b[j]>=s){
                
                if(b[j]%f!=0){
                    b[j]+=(f-(b[j]%f));
                }
                b[j]+=c;
            }
            else{
                b[j]=s+c;
            }
            
        }
        /*cout<<i<<" :::"<<endl;
        rep(i,n)
            cout<<b[i]<<endl; */
    }
    rep(i,n)
    cout<<b[i]<<endl;    
}