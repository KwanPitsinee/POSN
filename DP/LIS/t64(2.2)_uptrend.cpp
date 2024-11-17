  //LANG : C++
#include<bits/stdc++.h>
using namespace std;

int lis[4005];// longest increasing subsequence (LIS)
int a[4010];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin>>n;
  int mx=0;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  for(int i=1;i<=n;i++){
    lis[i]=1;
    for(int j=1; j<i ;j++){
      if(a[j]<=a[i] && lis[j]+1>lis[i]){
        lis[i]=lis[j]+1;
      }
    }
      mx=max(mx,lis[i]);
  }
 cout<<mx;
}

/*
10
30750
30650
30800
30750
30650
30700
30600
30800
30750
30900
*/
