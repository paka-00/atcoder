#include <iostream>
using namespace std;
int main(){
	string s_1,s_2,s_3,t;
    cin>>s_1;
    cin>>s_2;
    cin>>s_3;
    cin>>t;
    int j;

    for (int i=0;i<size(t);i++){
        j=int(t[i]-'0');
        if (j==1) cout<<s_1;
        else if (j==2)cout<<s_2;
        else cout<<s_3;
    }
}
