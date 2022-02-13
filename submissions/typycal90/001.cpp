#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)
ll n,l,k;
vector<ll>a(n+1);

bool isok(ll m, vector<ll>a){
    int now=0,count=0,i=0,sum=0;
    while(count<k){
        now+=a[i];
        sum+=a[i];
        i++;
        if(now>=m){
            now=0;
            count++;
        }
        if(i>n+1)break;
    }

    if((l-sum)>=m)return true;
    else return false;
}

int main(){
    cin>>n>>l>>k;
    vector<ll>a(n+1);
    int i,t=0;
    for(i=0;i<n;i++){
        ll t1;cin>>t1;
        a[i]=t1-t;
        t=t1;
    }
    a[n]=l-t;
    ll left=0,right=l;
    ll m=(left+right)/2;
    while(1){
        if(isok(m,a)){
            left=m;

        }
        else{
            right=m;

        }
        m=(left+right)/2;
        if(m==left||m==right)break;
    }

    cout<<m<<endl;
}