  //LANG : C++
#include<bits/stdc++.h>
using namespace std;

long long int a[55][55];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int m,n,o;
  cin>>m>>n>>o;
  a[1][0]=1;
  while(o--){
    int i,j;
    cin>>i>>j;
    a[i][j]=1;
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(a[i][j]==1){
        a[i][j]=0;
      }
      else{
        a[i][j]=a[i][j-1]+a[i-1][j];
      }
    }
  }
  cout<<a[m][n];
  
}
