//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[10000];
	//string b={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	string c="0123456789ABCDEF";
	for(int k=1;k<=n;k++){
		int m;
		cin>>m;
		int i=1;
	while(m>=16){
		a[i]=m%16;
		m=m/16;
		i++;	
	}
	a[i]=m;
	for(int j=i;j>=1;j--){
		cout<<c[a[j]];
	}
	cout<<'\n';
	}
	
}
