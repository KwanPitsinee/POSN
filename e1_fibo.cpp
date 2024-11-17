//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int f[50];
	cin>>n;
	f[0]=0;
	f[1]=1;
	f[2]=1;
	if(n>=3){
		for(int i=3;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
	    }	
	}
	cout<<f[n];	
}
