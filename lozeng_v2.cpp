#include <bits/stdc++.h>
using namespace std;

int main(){
	char c; int h, n; cin >> c >> h >> n;
	for(int i=0;i<h*n;i++) {
		for(int j=0;j<h*n;j++) {
			if(abs(i%h-h/2)+abs(j%h-h/2)<=h/2) cout<<c;
			else cout << '.';
		}
		cout << '\n';
	}
}
