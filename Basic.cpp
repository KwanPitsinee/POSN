#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,s=0,p=1,mx= 0,mn= 2e9;
	cin>>n;
	for(int i=1;i<=n;i++){
	cin>>a;
	s=s+a;
	p=p*a;
	if(mx<a){mx=a;}
	if(mn>a){mn=a;}
	}
cout<<"Sum = "<<s<<"\n";
cout<<"Product = "<<p<<"\n";
cout<<"Mix = "<<mx<<"\n";
cout<<"Min = "<<mn<<"\n";
}
