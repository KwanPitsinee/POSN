//LANG:C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int i=1;
	int a[10000];
	
	while(n>=m){	
	 a[i]=n%m;
	 i=i+1;
	 n=n/m;	
	}
	a[i]=n;
	for(int k=i;k>=1;k--){
		if(a[k]>9){
		 if(a[k]==10) cout<<'A';
		 if(a[k]==11) cout<<'B';
		 if(a[k]==12) cout<<'C';
		 if(a[k]==13) cout<<'D';
	 	 if(a[k]==14) cout<<'E';
		 if(a[k]==15) cout<<'F';
		}
		else{cout<<a[k];
		}	
	}	
}
