#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=unsigned long long;

int main(){
    int a,b;cin>>a>>b;
    vector<int>A(3),B(3);
    for(int i=0;i<3;i++){
        A[i]=a%10;
        a/=10;
        B[i]=b%10;
        b/=10;
    }
    int ans=-1000;
    int i,j;
    vector<int>A1,B1;
    for(i=0;i<3;i++){
        a=0;
        b=0;
        A1=A;
        B1=B;
        A1[i]=9;

        for(j=0;j<3;j++){
            a+=A1[j]*pow(10,j);
            b+=B1[j]*pow(10,j);
        }
        chmax(ans,a-b);
    }
    for(i=0;i<2;i++){
        a=0;
        b=0;
        A1=A;
        B1=B;
        B1[i]=0;
        for(j=0;j<3;j++){
            a+=A1[j]*pow(10,j);
            b+=B1[j]*pow(10,j);
        }
        chmax(ans,a-b);
    }
    for(i=0;i<3;i++){
        A1=A;
        B1=B;
        a=0;
        b=0;
        B1[i]=1;
        for(j=0;j<3;j++){
            a+=A1[j]*pow(10,j);
            b+=B1[j]*pow(10,j);
        }
        chmax(ans,a-b);
    }
    cout<<ans<<endl;
}