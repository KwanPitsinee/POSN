// LANG : C++
#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
const int m=100000;
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

  int l;
  
    cin>>l;
    cout<<l<<":";
    
    ll x=l;
    for(auto e:prime){
      if(1ll*e*e>x) break;
        while(x%e==0){
          cout<<' '<<e;
          x/=e;
        }
    }
    if(x!=1) cout<<' '<<x;
    cout<<"\n";
  
}

//https://vjudge.net/contest/197330#problem/B
