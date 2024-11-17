//LANG:C+++
#include<bits/stdc++.h>
using namespace std;
string toOct(int n){
string str;
string dig="0123456789ABCDEF";
while(n!=0){
	str+=dig[n%16];
	n/=16;
}
reverse(str.begin(),str.end());
return str;
}
int main(){
	int n;cin>>n;
	string str=toOct(n);
	cout<<str;
	return 0;
}
	


