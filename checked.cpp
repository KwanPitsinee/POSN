#include<bits/stdc++.h>
using namespace std;

char d[1005][1005];

void square(int n,int a,int b){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i%(2*a)<a && j%(2*a)<a){
        d[i][j]='#';
      }
      if(i%(2*a)>=a && j%(2*a)>=a){
        d[i][j]='#';
      }
      
      if(i%(2*b)<b && j%(2*b)<b){
        d[i][j]='#';
      }
      if(i%(2*b)>=b && j%(2*b)>=b){
        d[i][j]='#';
      }
    }
  }
}

void print(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<d[i][j];
    }
    cout<<'\n';
  }
}

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  memset(d,'.',sizeof d);
  int n,a,b;
  cin>>n>>a>>b;
  square(n,a,b);
  print(n);
}

