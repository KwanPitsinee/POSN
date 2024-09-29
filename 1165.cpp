// LANG : C++
#include <bits/stdc++.h>
using namespace std;

const int h=1000001;
bool a[h];
vector<int>pr;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  for(int i=2;i<h;i++){
    if(a[i]==false){
      pr.push_back(i);
      for(int j=i*2;j<h;j+=i) a[j]=true;
    }
  }
  
  int n;
  cin>>n;
  long long int gd=0;
  for(int i=1;i<=n;i++){
    long long int m;
    cin>>m;
    gd=__gcd(gd,m);
  }
  long long int x=gd;
  int ans=1;
 for(auto e:pr){
   if(1ll*e*e>x) break;
   int c=1;
   while(x%e==0){
     c++;
     x/=e;
    }
   ans*=c;
 }
  if(x!=1) ans*=2; 
  cout<<ans;
  
}
