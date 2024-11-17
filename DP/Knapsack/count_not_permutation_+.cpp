  //LANG : C++
#include<bits/stdc++.h>
using namespace std;

int a[]={6,9,20};
int dp[200];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  dp[0]=1;
  /*
  for(int i=0;i<=30;i++){
    for(int j=0;j<3;j++){
      if(i>=a[j]) dp[i]+=dp[i-a[j]];
    }
  }
  */

  for(int j=0;j<3;j++){
    for(int i=0;i<=50;i++){
      //if(i-a[j]>=0) dp[i]+=dp[i-a[j]];
      dp[i+a[j]]=dp[i+a[j]]+dp[i];
    }
  }

  for(int i=0;i<=50;i++){
    cout<<i<<" "<<dp[i]<<"\n";
  }
  

}
dp[6]=1
dp[9]=1
dp[12]=1
dp[15]=1
