//LANG:C++
#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0); cin.tie(0);
  int state=1;
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    string s;
    cin>>s;
    if(s.size()==16){
      int dec=0;
      for(int j=0;j<8;j++){
        if(state==1 && s[2*j]=='0' && s[2*j+1]=='0')  {
         
        }
        else if(state==1 && s[2*j]=='1' && s[2*j+1]=='1')  {
          state=2;
          dec+=pow(2,7-j);
        }
        else if(state==2 && s[2*j]=='0' && s[2*j+1]=='1')  {
          state=4;
          dec+=pow(2,7-j);
        }
        else if(state==2 && s[2*j]=='1' && s[2*j+1]=='0')  {
          state=3;
        }
        else if(state==3 && s[2*j]=='0' && s[2*j+1]=='0')  {
          state=2;
          dec+=pow(2,7-j);
        }
        else if(state==3 && s[2*j]=='1' && s[2*j+1]=='1')  {
          state=1;
        }
        else if(state==4 && s[2*j]=='1' && s[2*j+1]=='0')  {
         dec+=pow(2,7-j);
        }
        else if(state==4 && s[2*j]=='0' && s[2*j+1]=='1')  {
          state=3;
        }
      }
      cout<<char(dec);
    }
  }
  
  
}
