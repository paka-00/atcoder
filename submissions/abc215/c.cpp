#include <bits/stdc++.h>
using namespace std;


int main(){
 string s;cin>>s;
  int k;cin>>k;int i;int j=0;
  sort(s.begin(),s.end());
   do {j++;
    if(j==k){for(i=0;i<s.size();i++){cout<<s[i];}cout<<endl;}
  } while (next_permutation(s.begin(), s.end()));

}
