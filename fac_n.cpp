//LANG: C++
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int m = 1;
for(int i=1;i<=n;i++){
	int fac = 1;
	for(int j=1;j<=i;j++){
		fac = fac * j;	
	}
		if( fac > n){
		//cout << "xxx" << endl;	
		break;	
	}
	m = i;	
}
cout << m << endl;
return 0;	
}
