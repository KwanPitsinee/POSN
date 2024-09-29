#include<bits/stdc++.h>
using namespace std;

//dp ???????????????????????????????????????????????array
int dp[105];
int a[105];
int main(){
ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    //cin>>dp[i];
    a[i]=(rand()%10)+1;
    cout<<a[i]<<" ";
    
  }
  cout<<"\n";
  for(int i=1;i<=n;i++){
    dp[i]=a[i]+dp[i-1];//prefix sum
    cout<<dp[i]<<" ";
  }
  cout<<"\n";
  int q;
  cin>>q;
  while(q--){
    int l,r;
    cin>>l>>r;
    /*
    int k=0;
    for(int i=l;i<=r;i++){
      k=k+dp[i];
    }
    cout<<k<<"\n";
    */
    
    int k=dp[r]-dp[l-1];
    cout<<k<<"\n";
  }
  
  
}



