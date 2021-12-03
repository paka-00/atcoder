#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  int c=0;
  do {
    c++;
  } while (next_permutation(s.begin(), s.end()));
  cout<<c;
}
