//LANG : C++
#include<bits/stdc++.h>
using namespace std;
//priority_gueue;

priority_queue<int> q;
	
int main(){
  int m,n;
  cin>>m>>n;
  
  for(int i=1;i<=m+n;i++){
    int x;
    cin>>x;
    if(x!=-1) q.push(x);
    else{
      cout<<q.top()<<"\n";
      q.pop();
    }
  }
	return 0;
}
