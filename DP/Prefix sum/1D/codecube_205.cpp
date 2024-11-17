//LANG : C++
#include<bits/stdc++.h>
using namespace std;

double dp[10001];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n,m;
  cin>>n>>m;
  dp[0]=0;
  for(int i=1;i<=n;i++){
    double a;
    cin>>a;
    dp[i]=dp[i-1]+a;
  }
  cout<<n-m+1<<'\n';
  for(int i=m;i<=n;i++){
    double ans=(dp[i]-dp[i-m])/m;
    cout<<fixed<<setprecision(6)<<ans;
    cout<<' ';
  }
}
