#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll x[200001];
ll dp[200001];
int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  int n,q;
  cin>>n>>q;
  dp[0]=0;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    dp[i]=x[i]+dp[i-1];
  }
  for(int i=1;i<=q;i++){
    int a,b;
    cin>>a>>b;
    cout<<dp[b]-dp[a-1]<<'\n';
  }
}
//https://cses.fi/problemset/task/1646
