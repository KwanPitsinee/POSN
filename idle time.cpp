/*LANG:C++*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[480];
	for(int i=0;i<480;i++) a[i]=1;
	
	int n,x,y;
	cin>>n;
	for(int i=0;i<n;i++){		
		cin>>x>>y;
		for(int j=x;j<=y;j++) a[j]=0;		
	}
	int sum=0;
	for(int i=0;i<480;i++) sum=sum+a[i];
	cout<<sum<<'\n';
	return 0;
}

