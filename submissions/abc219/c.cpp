#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using namespace std;

int main(){
    string x;cin>>x;
    int n;cin>>n;
    string X="abcdefghijklmnopqrstuvwxyz";
    vector<string>s(n);
    for(int i=0;i<n;i++)cin>>s[i];
    
    for(int j=0;j<n;j++){
        for(int i=0;i<s[j].size();i++){
            char temp=s[j][i];
            int idx=x.find(temp);
            s[j][i]=X[idx];
            
        }
    }
    sort(s.begin(),s.end());
    for(int j=0;j<n;j++){
        for(int i=0;i<s[j].size();i++){
            char temp=s[j][i];
            int idx=X.find(temp);
            s[j][i]=x[idx];
            
        }
    }
    for(auto v:s)cout<<v<<endl;
}

