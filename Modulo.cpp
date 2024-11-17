#include<bits/stdc++.h>
using namespace std;
int chk[45];

int main(){
  for(int i=1;i<=10;i++){
    int x;
    cin>>x;
    x=x%42;
    chk[x]=1;
  }
  int s=0;
  for(int i=0;i<=41;i++){
    //cout<<i<<" "<<chk[i]<<"\n";
    //s=s+chk[i];
    if(chk[i]>0) s=s+1;
  }
  cout<<s;
}



//https://beta.programming.in.th/tasks/0011