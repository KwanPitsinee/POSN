#include<bits/stdc++.h>
using namespace std;

//dp ???????????????????????????????????????????????array
const int m=100001;
bool prime[m];
int dp[m];

int main(){
ios::sync_with_stdio(0); cin.tie(0);
  for(int i=2;i<m;i++){
    if(prime[i]==0){
      dp[i]=1;
      for(int j=i*2;j<m;j+=i) prime[j]=1;
    }
  }
  for(int i=1;i<m;i++){
    dp[i]=dp[i]+dp[i-1];
  }
  
  for(int i=1;i<=20;i++){
    cout<<dp[i]<<" ";
  }
  cout<<"\n";
  
  int q;
  cin>>q;
  while(q--){
    int n; 
    cin>>n;
    cout<<dp[n]-dp[1-1]<<"\n";
  }
 
  
}



