//LANG:C++
#include<bits/stdc++.h>
using namespace std;

int a[11][11];
int b[11][11];
int c[11][11];

int main(){
ios::sync_with_stdio(0); cin.tie(0);
  int n,p;
  cin>>n>>p;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
      if(i==j) b[i][j]=1;
    }
  }
  for(int k=1;k<=p;k++){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        for(int r=1;r<=n;r++){
          c[i][j]+=a[i][r]*b[r][j];
        }
      }
    }
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        b[i][j]=c[i][j];
      }
    }
    memset(c,0,sizeof c);
  }
for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    cout<<b[i][j]<<' ';
  }
  cout<<'\n';
}
}


