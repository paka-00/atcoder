#include <bits/stdc++.h>
template<class T> inline bool chmaa(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll=unsigned long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

vector<vector<bool>>s(1010,vector<bool>(1010));

bool isok=false;
int n;



int main(){
    cin>>n;
    vector<string>s;
    rep(i,n){
        string str;cin>>str;
        s.push_back(str);
    }
    int c=0;
    rep(i,n){
        rep(j,n){
            if(i<n-5){
                c=0;
                for(int l=0;l<6;l++){
                    if(s[i+l][j]=='#')
                    c++;
                }
                if(c>=4)isok=true;
            }
            if(j<n-5){
                c=0;
                for(int l=0;l<6;l++){
                    if(s[i][j+l]=='#')
                    c++;
                }
                if(c>=4)isok=true;
            }
            if(i<n-5&&j<n-5){
                c=0;
                for(int l=0;l<6;l++){
                    if(s[i+l][j+l]=='#')
                    c++;
                }
                if(c>=4)isok=true;
            }
            if(i>=5&&j<n-5){
                c=0;
                for(int l=0;l<6;l++){
                    if(s[i-l][j+l]=='#')
                    c++;
                }
                if(c>=4)isok=true;
            }
        }
    }
    if(isok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}