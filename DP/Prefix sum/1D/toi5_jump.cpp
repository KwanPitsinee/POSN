//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int dp[90001];
vector<int>line;
int l;
int mx=0;

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n,k;
  cin>>n>>k;
  while(n--){
    cin>>l;
    line.push_back(l);
    dp[l]=1;
  }
  for(int i=0;i<l;i++){
    dp[i+1]+=dp[i];
    //cout<<dp[i+1]<<" ";
  }
  //cout<<"\n";
  for(auto e:line){
    int x=dp[min(e+k,l)]-dp[e];
    mx=max(mx,x);
  }
  cout<<mx;
}
