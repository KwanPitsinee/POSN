#include <bits/stdc++.h>
using namespace std;

vector<int> v;
//map<int,bool> chk;
unordered_map<int,bool> chk;
bool perfect[20000005];

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int a,b;
  cin>>a>>b;
  perfect[1]=true;
  for(int i=2;i*i<=b;i++){
    for(int j=2; ;j++){
      int p=pow(i,j);
      if(p>b) break;
      perfect[p]=true;
    }
  }
  for(int i=1;i*i<=b;i++){
    int k=b/(i*i);
    for(int j=1;j*j*j<=k;j++){
      int m=i*i*j*j*j;
      if(chk.find(m)==chk.end() && perfect[m]!=true && m>=a){//chk[m]==false
        v.push_back(m);
        chk[m]=1;
      }
      
    }
  }
  //sort(v.begin(),v.end());
  cout<<v.size();
  /*
  cout<<"\n";
  for(int e:v){
    cout<<e<<" ";
  }
  */  
}


