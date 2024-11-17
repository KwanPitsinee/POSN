  //LANG : C++
#include<bits/stdc++.h>
using namespace std;

int a[200001];
int lis[200005];
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin>>n;
  int mx=0;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  for(int i=1;i<=n;i++){
    lis[i]=1;
    for(int j=1;j<i;j++){
      if(a[i]>a[j] && lis[j]+1>lis[i]){
        lis[i]=lis[j]+1;
      }
    }
    mx=max(mx,lis[i]);
  }
  cout<<mx;
}


