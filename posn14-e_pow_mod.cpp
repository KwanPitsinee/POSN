//LANG:C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d=1;
	cin>>a>>b>>c;
	for(int i=1;i<=b;i++){
		d=d*(a%c);
		if(d>=c){
			d=d%c;
		}
	}
	cout<<d;
}
