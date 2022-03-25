#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

int main(){
    string s;cin>>s;
    vector<bool>a(26);
    set <char>b;
    for(auto v:s){
        a[v-'a']=true;
        
    }
    int n=s.size();
    if(n==26){
        b.insert(s.back());
        for(int i = (int)s.size()-2; i >= 0; i--) {
            for(auto ch: b) {
            if(ch > s[i]) {
                cout << s.substr(0, i) << ch<<endl;
                return 0;
            }
            }
            b.insert(s[i]);
        }
        cout<<-1<<endl;
    }
    else{
        int i=0;
        while(a[i]==true)i++;
        s+='a'+i;
        cout<<s<<endl;
    }
    return 0;

}
