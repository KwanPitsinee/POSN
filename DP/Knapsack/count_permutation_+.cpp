  //LANG : C++
#include<bits/stdc++.h>
using namespace std;

int a[]={6,9,20};
int dp[200];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  dp[0]=1;
  for(int i=0;i<=30;i++){
    for(int j=0;j<3;j++){
      dp[i+a[j]]+=dp[i];
    }
  }

}
/*
sum=30

66666 1  
6699 4!/(2!2!)=6

dp[24]=4
dp[21]=3   ->dp[30]=
dp[10]=0

6666  6  24+6
669   9  21+9 
696   9  21+9
699   6  24+6
966   9  21+9
969   6  24+6
996   6  24+6 
*/
