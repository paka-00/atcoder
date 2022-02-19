#include <bits/stdc++.h>
#include <cassert>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

using namespace std;
using ll =long long;
#define rep(i, n) for (ll  i = 0; i < (ll )(n); i++)

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int i,j;
    bool w=false;
    bool takahashi=false;
    for(i=a;i<=b;i++){
        takahashi=true;
        for(j=c;j<=d;j++){
            if(IsPrime(i+j))takahashi=false;
        }if(takahashi) w=true;
    }
    if(w)cout<<"Takahashi"<<endl;
    else cout<<"Aoki"<<endl;
}