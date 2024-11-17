 //LANG : C++
#include<bits/stdc++.h>
using namespace std;

int dp[1000001];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin>>n;
  int mx=0;
  int mxdp=0;
  while(n--){
    int a,b;
    cin>>a>>b;
    dp[a]+=1;
    dp[b]-=1;
    mx=max(mx,b);
  }
  for(int i=1;i<=mx;i++){
    dp[i]=dp[i]+dp[i-1];
    mxdp=max(mxdp,dp[i]);
  }
  cout<<mxdp;
}
/*  
1 4
3 9
2 8
6 10
5 10

0  1  2  3  4  5  6  7  8  9  10
   1       -1 
         1                -1
      1                -1
                  1           -1
               1              -1
0  1  1  1 -1  1  1  0 -1 -1  -2
   1  2  3  2  3  4  4  3  2   0    
*/
 
//https://beta.programming.in.th/tasks/codecube_026

