#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    string s;
    getline(cin,s);
    vector<string>ans;
    string str;
    for(auto v:s){
        if(v==' '){
            ans.push_back(str);str="";
        }
        else str+=v;
    }
    ans.push_back(str);
    int n;cin>>n;
    vector<string>ng;
    for(int i=0;i<n;i++){
        cin>>str;
        ng.push_back(str);
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<n;j++){
            if(ans[i].size()==ng[j].size()){
                
                string g;g.assign(ans[i].size(),'*');
                bool NG=true;
                for(int l=0;l<ans[i].size();l++){
                    if(ng[j][l]!='*'&&ans[i][l]!=ng[j][l])NG=false;
                }
                if(NG){
                    ans[i]=g;
                }
            }
            else continue;
        }
    }
    for(auto v:ans)cout<<v<<" ";cout<<endl;
    
}
