//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	long long int lcm=1;
	
	for(int i=1;i<=n;i++){
		long long int m;
		cin>>m;
		lcm=lcm*m/__gcd(lcm,m);
	}

	cout<<lcm;
	
}
