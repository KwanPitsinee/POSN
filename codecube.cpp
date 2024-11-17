/*
TASK: square
LANG: C++
AUTHOR: Pitsinee Nakluan
CENTER: SUT
*/
#include<bits/stdc++.h>
using namespace std;
string x,y;
string K;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);//?????cin???????????????????cout????????????
  cin>>x>>y;
  for(int i=0;i<x.size();i++){
    if('A'<=x[i] && x[i]<='Z'){
      x[i]=(x[i]-'A')+'a';
    }
  }
  for(int i=0;i<y.size();i++){
    if('A'<=y[i] && y[i]<='Z'){
      
      y[i]=(y[i]-'A')+'a';//????????????'a'
    }
  }
  for(int i=0;i<y.size();i++){
  if(x[i]<y[i]){
   K[i]=x[i]-y[i]+26;
  }
  else{
      K[i]=x[i]-y[i];
  }
  }
  cout<<x<<"  "<<y<<" "<<K;
  
}
/*
morningdeW
MoRNiNgDEV
*/
