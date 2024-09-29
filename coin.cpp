//LANG:C++
#include<bits/stdc++.h>
using namespace std;

deque<int> dq;


int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int k=3;
  while(k--){
    int h,t;
    cin>>h>>t;
    if(t+1<h) {
      cout<<0<<"\n";
      continue;
    }
    long long int a=1;
    for(int i=2;i<=t+1;i++){
      a=a*i;
    }
    for(int i=2;i<=h;i++){
      a=a/i;
    }
    for(int i=2;i<=t+1-h;i++){
      a=a/i;
    }
    cout<<a<<'\n';
  }
  
}
