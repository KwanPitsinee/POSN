//LANG : C++
#include<bits/stdc++.h>
using namespace std;

vector<int>v;
pair<int,int> val[15];
int mn=1000000000;

void rec(int n){
  if(v.size()==n){
    int sum=0;
    for(auto e:v) {
      //cout<<e;
      sum+=e;
    }  
    //cout<<"\t";
    if(sum==0){
      //cout<<"\n";
      return; 
    }
    
    int s=1;
    for(int i=0;i<n;i++){
      if(v[i]==1) s=s*(val[i+1].first);
    }
    //cout<<s;
    //cout<<"\t";
    int b=0;
    for(int i=0;i<n;i++){
      if(v[i]==1) b=b+(val[i+1].second);
    }
    //cout<<b<<"\t";
   // cout<<abs(s-b)<<"\t";
    int dif=abs(s-b);
    mn=min(mn,dif);
    
    //cout<<"\n";
    return;
  }
  v.push_back(0);
  rec(n);
  v.pop_back();

  v.push_back(1);
  rec(n);
  v.pop_back();
}

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>val[i].first>>val[i].second;
  }
  rec(n);
  cout<<mn;
}

