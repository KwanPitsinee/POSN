  //LANG : C++
#include<bits/stdc++.h>
using namespace std;

int dp[222];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int k;
  cin>>k;
  while(k--){
    memset(dp,0,sizeof(dp));
    int n,g;
    cin>>n>>g;
    int n1[n];
    for(int i=0;i<n;i++){
      cin>>n1[i];
    }
    dp[0]=1;
    for(int j=0;j<n;j++){
      for(int i=0;i<=g;i++){
        dp[i+n1[j]]+=dp[i];
      }
    }
    cout<<dp[g]<<'\n';
    
  }
}
