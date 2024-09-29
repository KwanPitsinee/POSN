#include <bits/stdc++.h>
using namespace std;

vector<int>prime;
bool pr[5000];//sqrt(5000000)
map<int,bool> chk;//=bool chk[100000]
vector<int>pwf;
vector<int>hpwf;

int prodex(int m){
    int tol=1;
    for(auto e:prime){
      if(e*e>m) break;
      if(m%e==0){
        int cnt=0;
        while(m%e==0){
          m=m/e;
          cnt++;
        }
        tol=tol*cnt;
      }
    }
  return tol;
}

void powerful(){
  for(int i=1;i*i<=5000000;i++){
    int k=5000000/(i*i);
    for(int j=1;j*j*j<=k;j++){
      int m=i*i*j*j*j;
      if(chk.find(m)==chk.end()){
        pwf.push_back(m);
        chk[m]=1;
      }
    }
  }
  sort(pwf.begin(),pwf.end());
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  for(int i=2;i<5000;i++){
    if(pr[i]==0){
      prime.push_back(i);
      for(int j=i*2;j<5000;j+=i){
        pr[j]=1;
      }
    }
  }
  powerful();
  int mxpd=0;
  for(auto e:pwf){
    int pd=prodex(e);
    if(pd>mxpd){
      hpwf.push_back(e);
      mxpd=pd;
    }
  }
//powerful  e     (1) (4) (8)  9  (16)  25   27 (32)  36
//prodex   pd  0   1   2   3   2    4   2    3    5   4    
  
  int m,n;
  cin>>m>>n;
  for(int i=1;i<=n;i++){
    int nn;
    cin>>nn;
    cout<<prodex(nn)<<" ";
    auto u=upper_bound(hpwf.begin(),hpwf.end(), nn);
  //          nn= 10
   // *(u-1)8       *u=16
    cout<<*(u-1);
    cout<<"\n";   
  } 
}


