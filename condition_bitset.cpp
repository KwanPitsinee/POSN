#include<bits/stdc++.h>
using namespace std;
bitset<6>a,b,c;
int A,B,C;

int main(){
  a=8;
  b=3;
  A=8;
  B=3;
  c=(a&b);
  C=(A&B);
  cout<<a<<' '<<b<<' '<<c<<"\n";
  cout<<A<<' '<<B<<' '<<C<<"\n";
  if(C){
    cout<<"Y";
  }
  else{
    cout<<"N";
  }
  cout<<"\n";
  cout<<(C != 0 ? "YES" : "NO");
}


//   https://www.onlinegdb.com/online_c++_compiler