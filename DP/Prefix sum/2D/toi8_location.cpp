//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];
int dp[1005][1005];
int mx=0;

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int m,n,k;
  cin>>m>>n>>k;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }
 for(int i=1;i<=m;i++){
   for(int j=1;j<=n;j++){
     dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+a[i][j];
     //cout<<dp[i][j]<<" ";
   }
   //cout<<'\n';
 }
  for(int i=k;i<=m;i++){
    for(int j=k;j<=n;j++){
      int x=dp[i][j]-dp[i][j-k]-dp[i-k][j]+dp[i-k][j-k];
     mx=max(mx,x); 
    }
  }
  cout<<mx;
}
