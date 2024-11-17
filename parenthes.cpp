/*LANG : C++ */
#include <bits/stdc++.h>
using namespace std;
int n;
string s;



int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>s;
    //for(int j=0;j<s.size();j++){
        //cout<<s[j]<<" - ";
    //}
    vector<char> v;
    bool y=true;
    for(auto e:s){
      if(e=='(' || e=='['){
        v.push_back(e);
      }
      else if(e==')'){
        if(v.size()>0 && v.back()=='('){
          v.pop_back();
        }
        else{
          y=false;
        }
      }
      else if(e==']'){
        if(v.size()>0 && v.back()=='['){
          v.pop_back();
        }
        else{
          y=false;
        }
      }
    }

    
    
    if(v.size()>0) y=false;

    
    if(y==true) cout<<"Yes";
    else cout<<"No";
    
    cout<<"\n";
  }
  
}