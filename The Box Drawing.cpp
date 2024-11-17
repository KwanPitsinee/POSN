 /*
TASK: square
LANG: C++
AUTHOR: Pitsinee Nakluan
CENTER: SUT
*/
#include<bits/stdc++.h>
using namespace std;
char a[65][45];
int n;

int main(){
  	ios::sync_with_stdio(0);cin.tie(0);
   memset(a,'-',sizeof a);
  
  cin>>n;

  for(int i=1;i<=3*n-3;i++){
    for(int j=1;j<=2*n+1;j++){
      if(i+j>=n+2 && j>1) a[i][j]='#';
    }
  }

  
  for(int i=1;i<=3*n-3;i++){
    for(int j=1;j<=2*n+1;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
}

