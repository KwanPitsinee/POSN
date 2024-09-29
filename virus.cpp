//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int m,sum=0;
  cin>>m;
  string st;
  cin>>st;
  for(auto e:st){
    sum=sum+(e-'0');
  }
  sum=sum%26;
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>st;
    for(auto e:st){
      e=e+sum;
      if(e>'Z') e=e-26;
      cout<<e;
    }
    cout<<'\n';
  }
}
