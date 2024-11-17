#include <bits/stdc++.h>
using namespace std;
char a[5000][5000];
int main() {
   int n;
   cin>>n;
   memset(a,'-',sizeof a);
   for(int i=1;i<=n;i++){
    a[i][1]='*';
   }
   int x=n;
   int y=1;
   if(n%2==0){
    int cnt=0;//?????????????????
    for(int k=n;k>2;k=k-2){
     for(int m=1;m<=2;m++){
      if(cnt%4==0){
       for(int j=0;j<=k-1;j++){
        a[x][y+j]='*';
       }
       y=y+(k-1);
      }
      else if(cnt%4==1){
       for(int i=0;i<=k-1;i++){
        a[x-i][y]='*';
       }
       x=x-(k-1);
      }
      else if(cnt%4==2){
       for(int j=0;j<=k-1;j++){
        a[x][y-j]='*';
       }
       y=y-(k-1);
      }
      else{
       for(int i=0;i<=k-1;i++){
        a[x+i][y]='*';
       }
       x=x+(k-1);
      }
      cnt++;
     }
    }
    if(cnt%4==0){
     for(int j=0;j<2;j++){
      a[x][y+j]='*';
     }
    }
    else if(cnt%4==1){
     for(int i=0;i<2;i++){
      a[x-i][y]='*';
     }
    }
    else if(cnt%4==2){
     for(int j=0;j<2;j++){
      a[x][y-j]='*';
     }
    }
    else{
     for(int i=0;i<2;i++){
      a[x+i][y]='*';
     }
    }
   }
   
   else{
    int cnt=0;//?????????????????
    for(int k=n;k>=3;k=k-2){
     for(int m=1;m<=2;m++){
      if(cnt%4==0){
       for(int j=0;j<=k-1;j++){
        a[x][y+j]='*';
       }
       y=y+(k-1);
      }
      else if(cnt%4==1){
       for(int i=0;i<=k-1;i++){
        a[x-i][y]='*';
       }
       x=x-(k-1);
      }
      else if(cnt%4==2){
       for(int j=0;j<=k-1;j++){
        a[x][y-j]='*';
       }
       y=y-(k-1);
      }
      else{
       for(int i=0;i<=k-1;i++){
        a[x+i][y]='*';
       }
       x=x+(k-1);
      }
      cnt++;
     }
      
    }
    
   }
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
       cout<<a[i][j];
      }
      cout<<'\n';
   }
}
