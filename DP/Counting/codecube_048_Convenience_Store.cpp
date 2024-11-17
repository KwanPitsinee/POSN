#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
int dp[50001];
int a[501];
int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  int n,x;
  cin>>n>>x;
  dp[0]=1;
  int m=1e6+7;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  for(int j=1;j<=n;j++){
    for(int i=x;i>=1;i--){
      if(i-a[j]>=0){
        dp[i]=dp[i]+dp[i-a[j]];
        dp[i]=dp[i]%m;
      }
    }
  }
  cout<<dp[x];
}
//https://beta.programming.in.th/tasks/codecube_048

