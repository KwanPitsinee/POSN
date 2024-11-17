//LANG :C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int i=0;
	int h[10000];
	int m;
	cin>>m;
	while(m>=8){
		h[i]=m%8;
		m=m/8;
		i=i+1;
			}
	h[i]=m;		
	for(int j=i;j>=0;j--){
		cout<<h[j];
	}		
}
