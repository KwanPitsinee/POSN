  //LANG : C++
#include<bits/stdc++.h>
using namespace std;

int vi[502];
int dp[50001];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>vi[i];
  }
  dp[0]=1;
  for(int j=0;j<n;j++){
    for(int i=m;i>=vi[j];i--){
      dp[i]=dp[i]+dp[i-vi[j]];
      dp[i]=dp[i]%1000007;
    }
  }
  cout<<dp[m];
}

