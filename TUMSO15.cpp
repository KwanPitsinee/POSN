#include<bits/stdc++.h>
using namespace std;

char a[25][160];

void print(int n, int m){  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cout<<a[i][j];
    }
    cout<<"\n";
  }
}



void space(int n, int m){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      a[i][j]=' ';
    }
  }
}
void T(int n,char c,int x){
  for(int j=1;j<=n;j++){
    a[1][j+x]=c;
  }
  for(int i=1;i<=n;i++){
    a[i][(n+1)/2+x]=c;
  }
}

void U(int n,char c,int x){
  for(int i=1;i<=n;i++){
    a[i][1+x]=c;
    a[i][n+x]=c;
  }
  for(int j=1;j<=n;j++){
    a[n][j+x]=c;
  }
}

void M(int n, char c,int x){
  for(int i=1;i<=n;i++){
    a[i][1+x]=c;
    a[i][n+x]=c;
  }
  for(int i=1;i<=(n+1)/2;i++){
    a[i][i+x]=c;
    a[i][n+1-i+x]=c;
  }  
}
void S(int n, char c,int x){
  for(int j=1;j<=n;j++){
    a[1][j+x]=c;
    a[(n+1)/2][j+x]=c;
    a[n][j+x]=c;  
  }
  for(int i=1;i<=(n+1)/2;i++){
    a[i][1+x]=c;
  }  
  for(int i=(n+1)/2;i<=n;i++){
    a[i][n+x]=c;
  }
  /*
  for(int i=1;i<=n;i++){
    if(i<=n/2+1) a[i][1]=c;
    if(i>=n/2+1) a[i][n]=c;
  }
  */
}
void O(int n,char c,int x){
  for(int i=1;i<=n;i++){
    a[i][1+x]=c;
    a[i][n+x]=c;
  }
  for(int j=1;j<=n;j++){
    a[1][j+x]=c;
    a[n][j+x]=c;
  }
}
void _1(int n, char c, int x){
  for(int i=1;i<=(n+1)/2;i++){
   a[i][(n+3)/2-i+x]=c;
  }
  for(int i=1;i<=n;i++){
    a[i][(n+1)/2+x]=c;
  }
  for(int j=1;j<=n;j++){
    a[n][j+x]=c;
  }
}

int main(){
  int t;
  cin>>t;

  for(int i=1;i<=t;i++){
    int m;
    cin>>m;
    space(m,7*m+12);
    T(m,'x',0);
    U(m,'x',m+2);
    M(m,'x',2*m+4);
    S(m,'x',3*m+6);
    O(m,'x',4*m+8);
    _1(m,'*',5*m+10);
    S(m,'*',6*m+12);
    print(m,7*m+12);
  }
}
//https://beta.programming.in.th/tasks/tumso15_tumso15th


