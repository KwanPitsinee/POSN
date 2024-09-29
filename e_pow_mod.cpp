//LANG:C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d=1;
	cin>>a>>b>>c;
	a=a%c;
	for(int i=1;i<=b;i++){
		d=d*(a);
	    d=d%c;
	}
	cout<<d;
}
