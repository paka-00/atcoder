#include <bits/stdc++.h>
#include <cassert>

template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
 
using namespace std;
using ll = long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using ld=long double;
using pll =pair<ll,ll>;
#define rep(i,n)for(ll i=0;i<(ll)(n);i++)
#define ssort(a)sort(a.begin(),a.end());
#define gsort(a)sort(a.begin(),a.end(),greater<ll>());
const ll mod=998244353;

int main(){
    ll x,a,d,n;cin>>x>>a>>d>>n;
    set<ll>s;
    ll min_v=a,max_v=a+(n-1)*d;
    ll tmp=min_v;
    chmin(min_v,max_v);
    chmax(max_v,tmp);

    if(d==0)cout<<abs(x-a)<<endl;
    else if(x>max_v)cout<<abs(x-max_v)<<endl;
    else if(x<min_v)cout<<abs(min_v-x)<<endl;
    else{
        ll t1,t2,a1,a2;
       
        t1=(x-a)/d;
        t2=t1+1;
        {a1=a+d*t1;a2=a+d*t2;}
        //cout<<"t:"<<t1<<" , "<<t2<<endl;
        //cout<<a1<<" , "<<a2<<endl;
        cout<<min(abs(x-a1),abs(x-a2))<<endl;
    }

}

