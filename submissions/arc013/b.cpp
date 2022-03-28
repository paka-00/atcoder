#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    int c;cin>>c;
    vector<int>b(3);
    rep(i,c){
        vector<int>t(3);
        cin>>t[0]>>t[1]>>t[2];
        sort(t.begin(),t.end());
        for(int j=0;j<3;j++){
            if(t[j]>b[j])b[j]=t[j];
        }
    }
    ll ans=1;
    for(auto v:b)ans*=v;
    cout<<ans<<endl;
}
