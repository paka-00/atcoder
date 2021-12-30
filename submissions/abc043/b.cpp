#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=unsigned long long;

int main(){
   string s;cin>>s;
   string ans;
   for(auto v:s){
       if(v!='B'){ans+=v;}
       else{
           if(ans.size()>0)
           ans.erase(ans.size()-1);
       }
   }
   cout<<ans<<endl;
}