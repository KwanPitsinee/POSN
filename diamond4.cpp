//LANG:C++
#include<bits/stdc++.h>
using namespace std;

char a[1000][1000];
vector<char>v;

void diamond(int n){
 for(int i=1;i<=n*2-1;i++){
  for(int j=1;j<=n*2-1;j++){
   int d=abs(i-n)+abs(j-n);
   if(d<=n-1){
    a[i][j]=v[n-1-d];
   }
  }
 }

}

void print(int n){
 for(int i=1;i<=2*n-1;i++){
  for(int j=1;j<=2*n-1;j++){
   cout<<a[i][j];
  }
  cout<<'\n';
 }
}

int main(){
 int n;
 cin>>n;
    set<char>st;
    for(int i=1;i<=n;i++){
     char c;
     cin>>c;
     st.insert(c);
 }
 
 
 for(auto e:st){
  v.push_back(e);
 }
 memset(a,' ',sizeof a);
 diamond(v.size());
 print(v.size());
}//LANG : C++
#include<bits/stdc++.h>
using namespace std;

