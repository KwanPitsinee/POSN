#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
ll dp[1000001];
int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  int n;
  cin>>n;
  dp[0]=1;
  int m=1e9+7;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=6;j++){
      if(i-j>=0){
        dp[i]=dp[i]+dp[i-j];
        dp[i]=dp[i]%m;
      }
    }
  }
  cout<<dp[n];
}

//https://cses.fi/problemset/task/1633

