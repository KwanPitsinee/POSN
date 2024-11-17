//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int dp[55];
int main(){
ios::sync_with_stdio(0); cin.tie(0);
  dp[0]=0;
  for(int i=1;i<=50;i++){
    dp[i]=dp[i-1]+i;
  }
  int x;
  cin>>x;
  int l=0;
  bool ck=true;
  for(int r=1;r<x;r++){
    while(dp[r]-dp[l]>x) l++;
    if(dp[r]-dp[l]==x){
      for(int j=l+1;j<=r;j++) cout<<j<<' ';
      ck=false;
      cout<<'\n';
    }
  }
  if(ck==true) cout<<"No";
}
