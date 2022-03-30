#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int n,g,i;cin>>n;
    vector<bool>ng(301,true);
    for(int i=0;i<3;i++){
        cin>>g;
        ng[g]=false;
    }
    vector<int>ans(n+1,1000);

    ans[n]=0;
 
    for(int i=n;i>=0;i--){
        for(int j=1;j<=3;j++){
            if(i-j>=0){
                if(ng[i-j])ans[i-j]=min(ans[i]+1,ans[i-j]);
            }
        }
    }
    //for(auto v:ans)cout<<v<<" ";cout<<endl;
    if(ans[0]<=100&&ng[n])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
