//LANG:C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,g;
	cin>>n>>m;
	g=__gcd(n,m);
	cout<<(n*m)/g;
}
