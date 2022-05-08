#include <bits/stdc++.h>
#include <cassert>
#include <string>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
const ll mod=1000000007;


int main(){
    int n;cin>>n;
    string s;cin>>s;
    vector<set<int>> vs(26);
    for (int i=0;i<n;i++) {
        vs[s[i]-'a'].insert(i);
    }
    int l = 0;
    int r = n;
    while (l < r) {
        int vmin = 26;
        for (int i=0;i<26;i++) {
        if (vs[i].size() > 0) {
            vmin = i;
            break;
        }
        }
        if (s[l] > vmin+'a') {
        // swap
        auto it = vs[vmin].end();
        it--;
        int ind = *it;
        swap(s[l],s[ind]);
        while (r > ind) {
            for (int i=0;i<26;i++) {
            vs[i].erase(r-1);
            }
            r--;
        }
        }
        for (int i=0;i<26;i++) {
        vs[i].erase(l);
        }
        l++;
    }
    cout << s << endl;
}

