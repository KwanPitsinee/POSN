//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int k=0;
	
	for(int i=1;i<=n;i++){
		int m;
		cin>>m;
		k=__gcd(k,m);
	}
	cout<<k;
}
