// LANG : C++
#include <bits/stdc++.h>
using namespace std;

int dp[11000101];
int x;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, k, l;
  cin>>n>>m>>k>>l;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    x=x+500003;
    dp[x] = 1;
  }
  for (int i = 1; i <= 11000100; i++) {
    dp[i] = dp[i] + dp[i - 1];
  }
  while(k--){
    int ans=0;
    int L,R=0;
    for(int j=1;j<=m;j++){
      int c;
      cin>>c;
      c=c+500003;
      L=max(c-l-1,R);
      R=c+l;
      ans+=dp[R]-dp[L];
    }
    cout<<ans<<"\n";
  }
  
}

