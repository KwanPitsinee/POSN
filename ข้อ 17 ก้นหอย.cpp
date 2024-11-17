
/*
TASK: square
LANG: C++
AUTHOR: Pitsinee Nakluan
CENTER: SUT
*/
#include<bits/stdc++.h>
using namespace std;
char a[1005][1005];

int main(){
  memset(a,' ',sizeof a);

  int x=50,y=50;
  int xmin=x, xmax=x, ymin=y, ymax=y;
  char m;
  int n;
  cin>>n>>m;
  
  for(int i=1;i<=n+1;i++){
    if(i%4==1){
      for(int k=0;k<i+1;k++) {
        a[x-k][y]=m;
      }
      x=x-i;
    }
    else if(i%4==2){
      for(int k=0;k<i+1;k++) {
        a[x][y-k]=m;
      }
      y=y-i;
    }
    else if(i%4==3){
      for(int k=0;k<i+1;k++){
        a[x+k][y]=m;
      }
      x=x+i;
    }
    else if(i%4==0){
      for(int k=0;k<i+1;k++){
        a[x][y+k]=m;
      }
      y=y+i;
    }
    xmin=min(xmin,x);
    xmax=max(xmax,x);
    ymin=min(ymin,y);
    ymax=max(ymax,y);
    
  }
  
  for(int i=xmin;i<=xmax;i++){
    for(int j=ymin;j<=ymax;j++){
      cout<<a[i][j];
    }
    cout<<"\n";
  }
}

