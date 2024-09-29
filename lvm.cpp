//LANG : C++
#include<bits/stdc++.h>
using namespace std;
string st[1001];
int v[1001];
stack<int> a;
int re;
int main(){
ios::sync_with_stdio(0); cin.tie(0);
 int n;
  cin>>n;
  for(int i=0;i<n;i++){
   cin>>st[i];
   if(st[i]=="PUSH" || st[i]=="IFZERO"){
     cin>>v[i];
   }
  }
  int i=0;
  while(true){
    if(st[i]=="PUSH"){
      a.push(v[i]);
      i++;
    } 
    else if(st[i]=="STORE"){
      re=a.top();
      a.pop();
      i++;
    } 
    else if(st[i]=="LOAD"){
      a.push(re);
      i++;
    } 
    else if(st[i]=="PLUS"){
      int x=a.top();
      a.pop();
      int y=a.top();
      a.pop();
      a.push(x+y);
      i++;
    } 
    else if(st[i]=="TIMES"){
      int x=a.top();
      a.pop();
      int y=a.top();
      a.pop();
      a.push(x*y);
      i++;
    } 
    else if(st[i]=="IFZERO"){
      if(a.top()==0) i=v[i];
      else i++;
      a.pop();
    } 
    else if(st[i]=="DONE"){
      cout<<a.top();
      return 0;
    } 
  }

}
