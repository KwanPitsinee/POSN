/*
TASK: square
LANG: C++
AUTHOR: Pitsinee Nakluan
CENTER: SUT
*/
#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];
vector<char> v;

void triangle(int n,int x,int y){
 for(int i=1;i<=n;i++){
   for(int j=1;j<=2*n-1;j++){
     if(i+j>=n+1 && j-i<=n-1){
       a[i+x][j+y]=v[i-1];
     }
   }
 }
}



void print(int n, int m){  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cout<<a[i][j];
    }
    cout<<"\n";
  }
}

int mem[30];


int main(){
  ios::sync_with_stdio(0);cin.tie(0);
   memset(a,' ',sizeof a);
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    char ch;
    cin>>ch;
    if(mem[ch-'A']==0){
      v.push_back(ch);
    }
    mem[ch-'A']++;
  }
  sort(v.begin(),v.end());
 
  n=v.size();
  for(int i=0;i<2;i++){
    for(int j=0;j<1+i ;j++){
      triangle(n,i*(n),n*(1-i)+j*(2*n));
    }
  } 
  print(2*(n),2*(2*n));

 

}
  #include<bits/stdc++.h>
using namespace std;

