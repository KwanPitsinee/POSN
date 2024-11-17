#include <bits/stdc++.h>
using namespace std;



int main() {
  int a,n,m,p=1;
  cin>>a>>n>>m;
 //n=n%(m-1); ใช้สำหรับ m เป็นจำนวนเฉพาะ
  for( int i=0;i<n;i++){
    p=p*a;
    p=p%m;
  }
  cout<<p;
}  






