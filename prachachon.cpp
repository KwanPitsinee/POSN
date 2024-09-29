#include<bits/stdc++.h>
using namespace std;

int main(){
  int q;
  int cksum=0;
  scanf("%d",&q);
  while(q--){
    cksum=0;
    string st;
    cin>>st;
    for(int i=1;i<=st.size()-1;i++){
      cksum+=(st[i-1]-'0')*(14-i);
    }
    cksum=cksum%11;
    if((11-cksum)%10==st[12]-'0') cout<<'Y'<<'\n';
    else cout<<'N'<<'\n';
  }
}

//https://crackncode.contest.codeforces.com/group/rn8uJP8lA7/contest/402572/attachments/download/17505/prachachon.pdf
