#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    ll n;cin>>n;
    ll k=log10(n);
    ll ans=0;
    for(int i=0;i<=k;i++){
        
        for(int j=i;j<=k;j++){
            if(i==0){
                string s,str;
                for(int l=0;l<=k;l++){
                    if(j+1>l){
                        s=s+'1';
                        str=str+'1';
                    }
                    else {
                        s=s+'9';
                        str=str+'0';
                    }
                }
                ll t=stoll(s),tmp=stoll(str);
                if(n>=t)
                    ans+=pow(10,(k-j));  
                else ans+=max((ll)0,n-tmp+1);
                //=(j+1)*'1'+(k)*'99';
            }
            else{
                ans+=pow(10,k-j);
            }
        }
    }
    cout<<ans<<endl;
}
