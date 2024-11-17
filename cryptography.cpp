//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	string st;
	string stnew;
	int key;
	cin>>st>>key;
	int s=st.size();
	int d=0;
	for(int k=d;k<44;k++){
		if((key*k)%43==1){
			d=k;
			break;
		}
	}
	for(int i=0;i<s;i++){
		char m=((st[i]-48)*d)%43+'0';
	 stnew=stnew+m;
	 
	}
	cout<<stnew;
}
