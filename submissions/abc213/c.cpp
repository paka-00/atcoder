#include <bits/stdc++.h>
using namespace std;

 
bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main(){
  long long h,w,n;
  cin>>h>>w>>n;
  int i,j;
  vector<pair<long long,long long>>a(n);
  vector<pair<long long,long long>>s(n);
  vector<pair<long long,long long>>f(n);
  for(i=0;i<n;i++){
    cin>>f[i].first>>s[i].first;
    f[i].second=i;s[i].second=i;
  }
  long long c=1;
  long long temp;
  sort(f.begin(),f.end());
  for(i=0;i<n;i++){
    temp = f[i].first;
    if(c<f[i].first){
      f[i].first=c;
    }if(i<n-1){
      if(f[i+1].first>temp)c++;
    }
  }
  
  c=1;

  sort(s.begin(),s.end());
   for(i=0;i<n;i++){
    temp = s[i].first;
    if(c<s[i].first){
      s[i].first=c;
    }if(i<n-1){
      if(s[i+1].first>temp)c++;
    }
  }
  sort(f.begin(),f.end(),compare_by_b);
  sort(s.begin(),s.end(),compare_by_b);
  for(i=0;i<n;i++){
    cout<<f[i].first<<" "<<s[i].first<<endl;    
  }
}
