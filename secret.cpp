//LANG:C++
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  
  int n;
  cin>>n;
  int cnt=0;
  for(int i=1;i<=n;i++){
    string st;
    cin>>st;
    for(int j=0;j<st.size();j++){
     cnt=cnt+st[j]-'A'+1;
    }
  }
  cout<<cnt;
}
