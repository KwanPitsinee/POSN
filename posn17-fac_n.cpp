/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main() {
	int m,i,ans=1;
	cin >> m;
	for(i=1 ; ans<m ; i++){
		ans = ans * i;
		if(ans>m){
			cout << i-1;
		}
	}
	return 0;
}
