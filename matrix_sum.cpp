#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,n,k;
  cin>>m>>n;
int a[m+2][n+2];
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cin>>k;
      a[i][j]=k;
    }
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cin>>k;
      a[i][j]=a[i][j]+k;
    }
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j]<<' ';
    }
    cout<<'\n';
  }
  
}





//https://beta.programming.in.th/tasks/0003