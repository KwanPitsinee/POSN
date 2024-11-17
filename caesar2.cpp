//LANG:C++
#include<bits/stdc++.h>
using namespace std;

int main(){
  string st;
  cin>>st;
  st=st+':';
  int n=0;
  for(int i=0;i<st.size();i++){
    n++;
    if(st[i]==':'){
      if((n-1)%2==0){
        for(int j=i-1;j>=i-(n-1);j--){
          int x=(n-1)%26;
          if(st[j]+x>'z'){
            st[j]=st[j]+x-26;
          }
          else{
            st[j]=st[j]+x;
          }
        }
      }
      else{
        for(int j=i-1;j>=i-(n-1);j--){
          int y=(n-1)%26;
          if(st[j]-y<'a'){
            st[j]=st[j]-y+26;
          }
          else{
            st[j]=st[j]-y;
          }
        }
      }
      n=0;
    }
  }
  for(int i=0;i<st.size()-1;i++){
    cout<<st[i];
  }
}
