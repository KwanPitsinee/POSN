//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int dp[100001];
int mx=0;

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n,k;
  cin>>n>>k;
  for(int i=1;i<=n;i++){
    string s;
    cin>>s;
    if(s=="UR") dp[i]=1;
    dp[i]=dp[i]+dp[i-1];
    if(i-k>=0){
      int c=dp[i]-dp[i-k];
      if(mx<c) mx=c;
    }
  }
  cout<<mx;
}

/*
k=3
0 1 2 3 4 5 6 7 8
      1     1  
0 0 0 1 1 1 2 2 2 <-dp
      1 1 1 1 1 1

k=5
0 1 2 3 4 5 6 7 8
0 0 0 1 1 1 2 2 2 <-dp
          1 2 2 1
*/


