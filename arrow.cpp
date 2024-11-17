//LANG :C++
#include<bits/stdc++.h>
using namespace std;


int n;
char c;
string st;
char a[200][32000];

void U(int n,char c,int x){
 for(int i=1;i<=n+1;i++){
   a[i][n+2-i+x]=c;
   a[i][n+i+x]=c;
 }
 for(int i=1;i<=2*n+1;i++){
   a[i][n+1+x]=c;
 }  
}

void D(int n,char c,int x){
  for(int i=2*n+1;i>=n+1;i--){
   a[i][i-n+x]=c;
   a[i][3*n+2-i+x]=c;
    }
  for(int i=1;i<=2*n+1;i++){
   a[i][n+1+x]=c;
 }  
}

void R(int n,char c,int x){
  for(int i=2*n+1;i>=n+1;i--){
   a[i][3*n+2-i+x]=c;
    }
  for(int i=1;i<=n+1;i++){
   a[i][n+i+x]=c;
 }
  for(int j=1;j<=2*n+1;j++){
    a[n+1][j+x]=c;
  }
  }  
void L(int n,char c,int x){
for(int i=1;i<=n+1;i++){
   a[i][n+2-i+x]=c;
 }
  for(int i=2*n+1;i>=n+1;i--){
   a[i][i-n+x]=c;
    }
  for(int j=1;j<=2*n+1;j++){
    a[n+1][j+x]=c;
  }
}
  
void print(int m,int n){
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j];
    }
    cout<<'\n';
  }
} 


int main(){
  memset(a,'.',sizeof a);
cin>>n>>c>>st;
int k=st.size();
for(int i=0;i<k;i++){
  if(st[i]=='U'){
    U(n,c,i*(2*n+1));
  }
  else if(st[i]=='D'){
    D(n,c,i*(2*n+1));
  }
  else if(st[i]=='R'){
    R(n,c,i*(2*n+1));
  }
  else if(st[i]=='L'){
    L(n,c,i*(2*n+1));
  }
  
}
print(2*n+1,(2*n+1)*k);  
}
