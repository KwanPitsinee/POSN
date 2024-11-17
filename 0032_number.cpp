// LANG : C++
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  vector<int>a;
  cin>>n;
  for(int i=1;i<=n;i++){
    int m;
    cin>>m;
    a.push_back(m);
  }
  sort(a.begin(),a.end());
  if(a[0]!=0){
    for(auto e:a){
      cout<<e;
    }
  }
  else{
    int cnt=0;
    while(a[cnt]==0){
      cnt++;
    }
    swap(a[0],a[cnt]);
      for(auto e:a) cout<<e;
  }
}

