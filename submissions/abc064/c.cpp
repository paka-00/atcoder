#include <bits/stdc++.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
using ll=long long;

vector<bool> col(8);

int k=0;

void co(int a){
    if(a<400)col[0]=true;
    else if(a<800)col[1]=true;
    else if(a<1200)col[2]=true;
    else if(a<1600)col[3]=true;
    else if(a<2000)col[4]=true;
    else if(a<2400)col[5]=true;
    else if(a<2800)col[6]=true;
    else if(a<3200)col[7]=true;
    else k++;
    return; 
}

int main(){
    int n;cin>>n;
    int i,a;
    k=0;
    for(i=0;i<n;i++){
        cin>>a;
        co(a);
    }
    int m=0,M=0;
    for(auto v:col){
        if(v)m++;
    }
    M=m+k;
    if(m==0)m=1;
    cout<<m<<" "<<M<<endl;
}
