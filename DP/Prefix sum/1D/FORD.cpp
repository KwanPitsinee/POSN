#include <bits/stdc++.h>
using namespace std;

char c[2005][4005];

void F(int N,int x){
 for(int i=1;i<=(2*N)-1;i++){
    c[i][1+x]='#';
 }
 for(int j=1;j<=N;j++){
    c[1][j+x]='#';
    c[N][j+x]='#';
 }
}

void O(int N,int x){
    for(int i=1;i<=(2*N)-1;i++){
        c[i][1+x]='#';
        c[i][N+x]='#';
    }
    for(int j=1;j<=N;j++){
        c[1][j+x]='#';
        c[(2*N)-1][j+x]='#';
    }
}

void R(int N,int x){
for(int i=1;i<=(2*N)-1;i++){
  c[i][1+x]='#';
}
for(int i=1;i<=N;i++){
  c[i][N+x]='#';
}
for(int j=1;j<=N;j++){
    c[1][j+x]='#';
    c[N][j+x]='#';
    c[N-1+j][j+x]='#';
 }
}

void D(int N,int x){
   for(int i=1;i<=(2*N)-1;i++){
        c[i][1+x]='#';
        c[i][N+x]='#';
    }
    for(int j=1;j<=N;j++){
        c[1][j+x]='#';
        c[(2*N)-1][j+x]='#';
    }
    c[1][N+x]=' ';
    c[(2*N)-1][N+x]=' ';
}

void print(int N){
    for(int i=1;i<=(2*N)-1;i++){
        for(int j=1;j<=(4*N)+4;j++){
            //cout<<c[i][j];
            printf("%c",c[i][j]);
        }
        //cout<<'\n';
        printf("\n");
    }
}

int main() {
   int N;
   //cin>>N;
   scanf("%d",&N);
 memset(c,' ',sizeof c);
 F(N,0);
 O(N,N+1);
 R(N,2*(N+1));
 D(N,3*(N+1));
 print(N);
}
