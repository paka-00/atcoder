#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

int main(){
    int n,i;cin>>n;
    vector<int>p(n);for(i=0;i<n;i++)cin>>p[i];
    int p_n=0;
    int q_n=0;
    vector<int>q(n);for(i=0;i<n;i++)cin>>q[i];
    do{
        p_n++;
    }while(next_permutation(p.begin(),p.end(),greater<int>()));
    do{
        q_n++;
    }while(next_permutation(q.begin(),q.end(),greater<int>()));
    cout<<abs(p_n-q_n)<<endl;
}