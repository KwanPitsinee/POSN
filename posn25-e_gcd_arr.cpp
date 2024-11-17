/* LANG : C++ */
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return (a>0||b>0) ? ((a==b) ? (a): ((a>b) ? (gcd(a-b, b)) : (gcd(a, b-a)))) : 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, ans=0; cin >> n;
	for(int i=0; i<n; ++i) {
		int x; cin >> x;
		if(i==0) ans=x;
		else ans=gcd(ans, x);
	}
	cout << ans;
	return 0;
}