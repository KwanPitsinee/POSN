#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,y,z;
  cin>>x>>y;
  if(y<x){
    z=2;
  }
  else if(y%x==0){
    z=y/x;
  }
  else{
    z=(y/x)+1;
  }
  cout<<z;
}


//https://beta.programming.in.th/submissions/h5hZFbi2PYpB2dWvelyi