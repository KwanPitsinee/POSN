#include<bits/stdc++.h>
using namespace std;

string st;
char a[1500][750];
int h;
bool ck[256];
string c_new;



void tri(string c,int n,int x,int y){
  for(int i=1;i<=2*n;i++){
    for(int j=1;j<=n;j++){
      int d=abs(i-n)+abs(j-1);
      if(d<=n-1){
        a[i+x][j+y]=c[n-1-d];
      }
    }
  }
}

void print(int m,int n){
  for(int i=1;i<=m;i++){
    
    for(int j=1;j<=n;j++){
      cout<<a[i][j];
      if(j!=n) cout<<".";
    }
    cout<<"\n";
    for(int j=1;j<=n;j++){
      cout<<".";
      if(j!=n) cout<<".";
    }
    cout<<'\n';
    
  }

  
}

int main(){
  memset(a,'.',sizeof a);
cin>>st>>h;
  int n=st.size();
for(int i=0;i<n;i++){
  if('a'<=st[i] && 'z'>=st[i]){
    st[i]=st[i]-'a'+'A'; 
  }
  ck[st[i]]=true;
}
for(char i='A';i<='Z';i++){
  if(ck[i]==true){
    c_new=c_new+i;
  }
}
n=c_new.size();
  for(int i=0;i<h;i++){
    for(int j=0;j<=h-1-i;j++){
      tri(c_new,n,i*(2*n)+j*n,j*n);
    }
  }
  
  print(2*n*h,n*h);
}
