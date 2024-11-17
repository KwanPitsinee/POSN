
/*
TASK: square
LANG: C++
AUTHOR: Pitsinee Nakluan
CENTER: SUT
*/
#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];
int n;


void box(int n,int x,int y){
  for(int i=1;i<=3*n-3;i++){
    for(int j=1;j<=2*n+1;j++){
      if(i+j>=n+2 && j>1 && j-i<=n && j<2*n+1 && 2*n-3>=i-j && 4*n-1>=i+j && i>1  && i<3*n-3) a[i+x][j+y]='#';
    }
  }

  for(int i=3*n-3;i>=2*n-3+1;i--){
    a[i+x][(2*n+1+1)/2+y]='-';
  }
  for(int i=n;i<=2*n-3+1;i++){
    a[i+x][i-n+3+y]='-';
    a[i+x][3*n-1-i+y]='-';
  }
}



void print(int n, int m){  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cout<<a[i][j];
      cout<<" ";
    }
    cout<<"\n";
  }
}

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
   memset(a,'-',sizeof a);
  
  cin>>n;
  box(n,0,0);
  print(1*(3*n-3),3*(2*n+1));
}

