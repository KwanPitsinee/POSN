//LANG :C++
#include<bits/stdc++.h>
using namespace std;


int main(){
	 
	
	int n;
	int h[10000];
	cin>>n;
	for(int k=1;k<=n;k++){
		int i=0;
		int m;
	    cin>>m;
	    	while(m>=2){	
		h[i]=m%2;
		m=m/2;
		i=i+1;
	}
	h[i]=m;
	for(int j=i;j>=0;j--){
		cout<<h[j];
	}
	cout<<'\n';
	}

}
