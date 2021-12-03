#include <bits/stdc++.h>
using namespace std;

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first > b.first;
    }
}

int main(){
  long long n;
  cin>>n;
  vector<pair<int,int>> a(n);
  for(int i=0;i<n;i++){a[i].first=i;cin>>a[i].second;} 
  sort(a.begin(),a.end(),compare_by_b);
  cout<<a[1].first+1<<endl;
  return 0;
}
