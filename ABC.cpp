#include<bits/stdc++.h>
using namespace std;
int main(){
int n[3];
for(int i=0;i<3;i++){
	cin>>n[i];
}
sort(n,n+3);
string str;
cin>>str;
for(char i:str){
	cout<<n[i-'A']<<' ';
}
}
