#include<bits/stdc++.h>
using namespace std;

char a[1600][1600];
string st;
int h;

void diamond(char c,int h,int x,int y){
  for(int i=1;i<=h;i++){
    for(int j=1;j<=2*h;j++){
      int d=abs(i-h)+abs(j-h);
      if(d<=h-1){
       a[i+x][j+y]=c;
      }
    }
  }
  
}

void print(int n,int m){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cout<<a[i][j];
    }
    cout<<'\n';
  }
}


int main(){
  memset(a,'.',sizeof a);
  cin>>st>>h;
  int k=st.size();
  int R=3;
  int K=R*k;
  for(int i=0;i< K ;i++){
    for(int j=0;j<=i;j++){
      int x=(i%k),y=(j%k);
      if(y<=x) diamond(st[  x  ],h,i*h,(j*2*h)+(  K  -1-i)*h);
      
    }
  }
  print(h* K ,2*h* K );
}



