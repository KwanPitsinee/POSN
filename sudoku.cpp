/*
TASK: square
LANG: C++
AUTHOR: Pitsinee Nakluan
CENTER: SUT
*/
#include<bits/stdc++.h>
using namespace std;

int a[15][15];
int r[15][15];
int c[15][15];
int g[15][5][5];
int Q[15][15];
bool is_latin(int y, int i, int j){
  if(r[y][i]==0 && c[y][j]==0){
    r[y][i]=1;
    c[y][j]=1;
    return true;
  }
  else return false;
}

bool is_sudoku(int y, int i, int j){
  if(g[y][(i-1)/3+1][(j-1)/3+1]==0){
    g[y][(i-1)/3+1][(j-1)/3+1]=1;
    return true;
  }
  else return false;
}

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int k;
   cin>>k;
for(int i=1;i<=9;i++){
  for(int j=1;j<=9;j++){
    cin>>Q[i][j];
  }
}
  
  
  for(int h=1;h<=k;h++){
    bool b=true;
    for(int i=1;i<=9;i++){
      for(int j=1;j<=9;j++){
        cin>>a[i][j];
        if(b==true){
          int y=a[i][j];
          if(Q[i][j]!=0) {
            if(Q[i][j]!=y) b=false;
          }
          if(is_latin(y,i,j)==false) b=false;
          if(is_sudoku(y,i,j)==false) b=false;
        }
      }
    }
    if(b==true) cout<<h<<"\n";
    memset(r,0,sizeof r);
    memset(c,0,sizeof c);
    memset(g,0,sizeof g);
  }  
  cout<<"END";
}


