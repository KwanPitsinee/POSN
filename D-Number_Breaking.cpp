// LANG : C++
#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
const int m=1000;
bool p[m+1]; 
vector<int> prime;

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
 for(int i=2;i<=m;i++){
   if(p[i]==false) {
     prime.push_back(i);
     for(int j=i*2;j<=m;j+=i){
       p[j]=true;
     }
   }
 }
 int n;
  cin>>n;
  int l;
  for(int i=1;i<=n;i++){
    cout<<"Case "<<i<<":";
    cin>>l;
    ll x=l;
    for(auto e:prime){
      if(1ll*e*e>x) break;
      if(x%e==0){
        cout<<' '<<e;
        while(x%e==0){
          x/=e;
        }
      } 
    }
    if(x!=1) cout<<' '<<x;
    cout<<"\n";
  }
}

//https://vjudge.net/contest/197330#overview
