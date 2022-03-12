#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int v,a,b,c;cin>>v>>a>>b>>c;
    char ans;
    while(1){
        v-=a;
        if(v<0){
            ans='F';
            break;
        }
        else{
            v-=b;
            if(v<0){
                ans='M';
                break;
            }
            else{
                v-=c;
                if(v<0){ans='T';break;}
            }
        }
        
    }
    cout<<ans<<endl;
}