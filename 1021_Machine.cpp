// LANG : C++
#include <bits/stdc++.h>
using namespace std;

priority_queue<int> pq;
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    char txt;
    cin>>txt;
    if(txt=='P'){
      int num;
      cin>>num;
      pq.push(num);
    }
    else{
      if(pq.empty()) cout<<-1<<"\n";
      else{
        cout<<pq.top()<<"\n";
        pq.pop();
      }
    }
  }
}
