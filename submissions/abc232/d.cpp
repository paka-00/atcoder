#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int h,w;
vector<vector<bool>>c(100,vector<bool>(100));
int vec_x[]={0,1};
int vec_y[]={1,0};
ll ans=0;

int main(){
    int i,j;
    cin>>h>>w;
    c.resize(h);
    for(i=0;i<h;i++){
        c[i].resize(w);
        for(j=0;j<w;j++){
            char t;cin>>t;
            if(t=='.')
                c[i][j]=true;
            else
                c[i][j]=false;
            }
    }
    if(c[0][0])ans=1;
    else ans=0;
    vector<vector<int>> m(h+1,vector<int>(w+1));
    for (i=h-1;i>=0;i--) {
        for (j=w-1;j>=0;j--){
            if(!c[i][j]) continue;
            m[i][j] = max(m[i + 1][j], m[i][j + 1]) + 1;
        }
    }
    cout<<m[0][0]<<endl;
}


