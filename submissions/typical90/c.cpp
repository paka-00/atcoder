#include <bits/stdc++.h>
using namespace std;

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

// nCk‚Ì‘g‚Ý‡‚í‚¹‚É‘Î‚µ‚Äˆ—‚ðŽÀs‚·‚é
void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

int main(){
  int n,p,q;cin>>n>>p>>q;
  int i,j,k,l,m;
  vector<int>a(n);
  for(i=0;i<n;i++)cin>>a[i];
  int ans=0;
  for(i=0;i<n;i++){
    for(j=0;j<i;j++){
      for(k=0;k<j;k++){
        for(l=0;l<k;l++){
          for(m=0;m<l;m++){
            if(1LL*a[i]*a[j]%p*a[k]%p*a[l]%p*a[m]%p==q)ans++;
          }
        }  
      }
    }
  }
  cout<<ans;
}
