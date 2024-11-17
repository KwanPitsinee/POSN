#include<bits/stdc++.h>
using namespace std;

int p[1000005];

int main(){

  for(int i=1;i<=1000000;i++){
    for(int j=i;j<=1000000;j+=i){
      p[j]++;
    }
  }
  int n;
cin>>n;
  for(int i=1;i<=n;i++){
    int x,y,z;
    cin>>x>>y>>z;
    int m=0;
    for(int j=x;j<=y;j++){
      if(p[j]==z){
        m++;
      }
    }
    cout<<m<<'\n';
  }
  

}
//https://beta.programming.in.th/tasks/1120
//https://beta.programming.in.th/tasks/codecube_010



//https://beta.programming.in.th/tasks/toi10_prime
