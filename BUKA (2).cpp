#include<bits/stdc++.h>
using namespace std;


  


int main(){
  unsigned long long int A,B,c;
  char n;
  cin>>A>>n>>B;
  /*switch (n){
    case * : c=A*B;
    break;
    case + : c=A+B;
  }*/
  if(n=='+'){
    c=A+B;
  }
  else if(n=='*'){
    c=A*B;
  }
  
  cout<<c;
  return 0;
}


//https://beta.programming.in.th/tasks/0025