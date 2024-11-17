  //LANG : C++
#include<bits/stdc++.h>
using namespace std;

int a[100002];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin>>n;
  int mx=0;
  int ans=0;
  for(int k=1;k<=n;k++){
    int i,j;
    cin>>i>>j;
    a[i]+=1;
    a[j]-=1;
  }
  for(int i=1;i<=100000;i++){
    a[i]=a[i]+a[i-1];
    if(a[i]>mx){
      mx=a[i];
      ans=i;  
    }
  }
  if(mx==n){
    cout<<"yes "<<ans;
  }
  else{
    cout<<"no "<<ans;
  }
}
