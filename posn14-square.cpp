/*
TASK: square
LANG: C++
AUTHOR: Pitsinee Nakluan
CENTER: SUT
*/
#include<bits/stdc++.h>
using namespace std;

char a[25][25];
int r[260][25];
int c[260][25];
int x[260];

bool is_latin(char y, int i, int j){
  if(r[y][i]==0 && c[y][j]==0){
    r[y][i]=1;
    c[y][j]=1;
    return true;
  }
  else return false;
}

int main(){
  	ios::sync_with_stdio(0);cin.tie(0);
   int k,n,cnt=0;
   cin>>k>>n;
  while(k--){
    bool b=true;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        cin>>a[i][j];
        if(b==true){
          char y=a[i][j];
          if(x[y]==0){
            x[y]=1; 
            cnt++;
          }
          if(cnt>n) b=false;
          if(is_latin(y,i,j)==false) b=false;
        }
      }
    }
    if(b==true)  cout<<"Y\n"; else cout<<"N\n";
    memset(r,0,sizeof r);
    memset(c,0,sizeof c);
    memset(x,0,sizeof x);
    cnt=0;
  }
  

  
  
}




