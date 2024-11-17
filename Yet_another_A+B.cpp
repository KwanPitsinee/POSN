#include<bits/stdc++.h>
using namespace std;


string st1,st2,st3;
#include<bits/stdc++.h>
using namespace std;


string st1,st2,st3;

int a[1000];

int main(){
  cin>>st1>>st2>>st3;
  string r1,r2,r3;
  for(int i=st1.size()-1;i>=0;i--) r1+=st1[i];
  for(int i=st2.size()-1;i>=0;i--) r2+=st2[i];
  for(int i=st3.size()-1;i>=0;i--) r3+=st3[i];
  
  cout<<r1<<"\n"<<r2<<"\n"<<r3<<"\n";
  int n1=r1.size(),n2=r2.size();
  if(n1<n2){
    for(int i=1;i<=n2-n1;i++){
      r1+='0';
    }
  }
  else if(n1>n2){
    for(int i=1;i<=n1-n2;i++){
      r2+='0';
    }
  }
  cout<<r1<<"\n"<<r2<<"\n"<<r3<<"\n";
  
  for(int i=0;i<min(r1.size(),r2.size());i++){
      int x=(r1[i]-'0')+(r2[i]-'0');
      a[i]+=x;
      a[i+1]+=(a[i]/10);
      a[i]%=10;
  }

  int mx=max(r1.size(),r2.size());
  for(int i=0;i<max(r1.size(),r2.size());i++){
   // cout<<a[i];
  }
  if(a[mx]>0) mx++;
  string ans;
  for(int i=0;i<mx;i++){
    char x='0'+a[i];
    ans=(x)+ans;
  }
  if(ans==r3) cout<<
  else
  
  
}


//https://vjudge.net/problem/Gym-100735I
int a[1000];

int main(){
  cin>>st1>>st2>>st3;
  string r1,r2,r3;
  for(int i=st1.size()-1;i>=0;i--) r1+=st1[i];
  for(int i=st2.size()-1;i>=0;i--) r2+=st2[i];
  for(int i=st3.size()-1;i>=0;i--) r3+=st3[i];
  
  cout<<r1<<"\n"<<r2<<"\n"<<r3<<"\n";
  int n1=r1.size(),n2=r2.size();
  if(n1<n2){
    for(int i=1;i<=n2-n1;i++){
      r1+='0';
    }
  }
  else if(n1>n2){
    for(int i=1;i<=n1-n2;i++){
      r2+='0';
    }
  }
  cout<<r1<<"\n"<<r2<<"\n"<<r3<<"\n";
  
  for(int i=0;i<min(r1.size(),r2.size());i++){
      int x=(r1[i]-'0')+(r2[i]-'0');
      a[i]+=x;
      a[i+1]+=(a[i]/10);
      a[i]%=10;
  }

  int mx=max(r1.size(),r2.size());
  for(int i=0;i<max(r1.size(),r2.size());i++){
   // cout<<a[i];
  }
  if(a[mx]>0) mx++;
  string ans;
  for(int i=0;i<mx;i++){
    char x='0'+a[i];
    ans=(x)+ans;
  }
  if(ans==r3) cout<<
  else
  
  
}


//https://vjudge.net/problem/Gym-100735I
