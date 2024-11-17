#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,r,sum=0;
  cin>>n;
  for(int i=1;i<=n;i++){
    int h;
    cin>>h;
    sum=sum+h;
    r=sum%39;
    if(r>=1 && r<=6){
      cout<<"Sunday\n";
    }
    else if(r>=7 && r<=8){
      cout<<"Monday\n";
    }
    else if(r>=9 && r<=14){
      cout<<"Tuesday\n";
    }
    else if(r>=15 && r<=20){
      cout<<"Wednesday\n";
    }
    else if(r>=21 && r<=24){
      cout<<"Thursday\n";
    }
    else if(r>=25 && r<=29){
      cout<<"Friday\n";
    }
    else{
      cout<<"Saturday\n";
    }
  }
}  



//https://www.proprog.ml/tasks/premid/descs/7350
