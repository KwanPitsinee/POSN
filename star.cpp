#include<bits/stdc++.h>
using namespace std;
char a[1100][1100];
void space(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      a[i][j]='-';
    }
  }
}
void print(int n){
  if(n%2==1){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        cout<<a[i][j];
      }
      cout<<'\n';
    }
  }
  else{
   for(int i=1;i<=n;i++){
      for(int j=1;j<=(n-1);j++){
        cout<<a[i][j];
      }
      cout<<'\n';
    } 
  }
}
void star(int n){
  if(n%2==1){
    
    
    for(int i=1;i<=(n+1)/2;i++){
      a[i][(n+3)/2-i]='*';
      a[i][((n-1)/2)+i]='*';
    }
    for(int i=(n+1)/2;i<=n;i++){
      a[i][(n*2)-(n-1)/2-i]='*';
      a[i][i-(n-1)/2]='*';
    }
  }
  else{
    
    for(int i=1;i<=n/2;i++){
      a[i][(n+2)/2-i]='*';
      a[i][(n-2)/2+i]='*';
      
    }
    for(int i=n/2+1;i<=n;i++){
      a[i][i-(n/2)]='*';
      a[i][(n/2)*3-i]='*';
    }
  }
}
int main(){
 int N;
  cin>>N;
  space(N);
  star(N);
  print(N);
}
//https://beta.programming.in.th/tasks/0022