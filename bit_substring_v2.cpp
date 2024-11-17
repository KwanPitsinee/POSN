//LANG : C++
#include<bits/stdc++.h>
using namespace std;

string s,sub;
int c=0;

void rec(int k){
  //cout<<s<<"\n";
  if(k==0){
    //cout<<s<<" ";
    if(s.find(sub)!=string::npos) c++;
    return;
  }
  s+='0';
  rec(k-1); 
  s.erase(s.end()-1);
  
  s+='1';
  rec(k-1);  
  s.erase(s.end()-1);
  
}

int main (){
  int n;
  cin>>n;
  cin>>sub;
  rec(n);
  cout<<c;
}               

//https://beta.programming.in.th/tasks/toi8_sport
//https://beta.programming.in.th/tasks/1168

/*
                                          ""/1
                    "0"/2                                       "1"/9
          "00"/3             "01"/6                "10" /10             "11"/13
    "000"/4     "001"/5   "010"7    "011"8   "100"/11    "101"/12   "110"/14   "111"/15
*/                   

  


