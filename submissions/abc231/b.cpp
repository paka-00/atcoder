#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n;cin>>n;
    set<string>s;
    vector<pair<string,int>> S;
    string st;
    bool c=false;
    for(int i=0;i<n;i++){
        cin>>st;
        for(int j=0;j<i;j++){
            if(st==S[j].first){S[j].second++;c=true;}
        }
        if(!c)S.push_back({st,0});
        c=false;
    }
    int max=-1;
    int idx=-1;
    for(int j=0;j<S.size();j++){
        if(max<S[j].second){max=S[j].second;idx=j;}
        
    }
    cout<<S[idx].first<<endl;
}

