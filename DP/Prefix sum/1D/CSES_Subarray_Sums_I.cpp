//LANG : C++
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

ll dp[200005];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n,x; cin>>n>>x;
  dp[0]=0;
  for(int i=1;i<=n;i++){
    int a; cin>>a;
    dp[i]=dp[i-1]+a;
  }
  int cnt=0;
  int l=0;
  for(int r=1;r<=n;r++){
    while(dp[r]-dp[l]>x) l++;
      if(dp[r]-dp[l]==x) cnt++;
  }
  cout<<cnt;
}
