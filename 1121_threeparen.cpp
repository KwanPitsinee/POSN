// LANG : C++
#include <bits/stdc++.h>
using namespace std;


int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin>>n;
  while(n--){
    stack<char>c;
    string st;
    bool chk=true;
    cin>>st;
    for(auto e:st){
      if(e=='(' || e=='{' || e=='['){
        c.push(e);
      }
      else{
        if(c.empty()){
          chk=false;
          break;
        }
        else if(e==']' && c.top()=='[') c.pop();
        else if(e==')' && c.top()=='(') c.pop();
        else if(e=='}' && c.top()=='{') c.pop();
        else {
          chk=false;
          break;
        }
      }
    }
    if(!c.empty()) chk=false;
    if(chk==true) cout<<"yes"<<'\n';
    else cout<<"no"<<'\n';
  }
}
