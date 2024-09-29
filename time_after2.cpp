//LANG : C++
#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int h,m,p;
	int hh,mm;
	cin>>h>>m>>p;
	mm=(m+p)%60;
	hh=((m+p)/60)+h;
	if(hh>=24){
		hh=hh-24;
	}
	if(hh<10 && mm<10){
		cout<<'0'<<hh<<' '<<'0'<<mm;
	}
	if(hh<10 && mm>=10){
		cout<<'0'<<hh<<' '<<mm;
	}
	if(hh>=10 && mm<10){
		cout<<hh<<' '<<'0'<<mm;
	}
	if(hh>=10 && mm>=10){
		cout<<hh<<' '<<mm;
	}
}
