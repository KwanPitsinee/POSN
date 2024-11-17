// LANG : C++
#include <bits/stdc++.h>
using namespace std;

int dp[10000001];
int x;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, k, l;
  cin>>n>>m>>k>>l;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    dp[x] = 1;
  }
  for (int i = 1; i <= 9999999; i++) {
    dp[i] = dp[i] + dp[i - 1];
  }
  while(k--){
    int ans=0;
    for(int j=1;j<=m;j++){
      int c;
      cin>>c;
      //int L=max(c-l-1,0);
      //int R=min(c+l,x);
      //    L=min(L,x);
      int R=c+l,L=c-l-1;
      ans+=dp[R]-dp[L];
    }
    cout<<ans<<"\n";
  }
  
}
/*
100 300  x=500
     
    c=600

   L=499  R=700  R>x
      dp[R=700]-dp[L=499]=0-2=-2   x
      dp[R=500]-dp[L=499]=3-2=1 /
  

    L=10000 R=200000  L,R>x
      dp[R=500]-dp[L=500]=3-3=0
    
  if(L>x && R>x) ans+=0;
*/
