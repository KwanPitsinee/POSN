#include<bits/stdc++.h>
using namespace std;

int a[26];

int main(){
  string k;
  cin>>k;
  int sh[200005];
  int n=k.size();
  for(int i=0;i<n;i++){
    cin>>sh[i];
  }
  //cout<<0<<": "<<k<<"\n";
  int mx=0;
  for(int i=1;i<=26;i++){
    for(int j=0;j<n;j++){
      int x=sh[j]%26;
      if(k[j]+x>'Z'){
        k[j]=k[j]+x-26;
      } 
      else{
        k[j]=k[j]+x;
      }
      a[k[j]-'A']++;
    }
    for(int v=0;v<=25;v++){
      mx=max(mx,a[v]);
      
    }
    memset(a,0,sizeof(a));
    //cout<<i<<": "<<k<<"\n";
  }
  cout<<mx;
}
