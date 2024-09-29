//LANG:C++
#include<bits/stdc++.h>
using namespace std;

int fac[12];
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  fac[0]=1;
  for(int i=1;i<=11;i++){
    fac[i]=fac[i-1]*i;
  }
  int n;
  cin>>n;
  for(int j=1;j<=n;j++){
    int m;
    cin>>m;
    bool ck=false;
   for(int i=11;i>=1;i--){
    if(fac[i]<=m ){
      int r=m/fac[i];
      m=m%fac[i];
      cout<<r;
      ck=true;
    }
     else if(ck==true){
       cout<<0;
     }
   }
    cout<<'\n';
  }
  
}


