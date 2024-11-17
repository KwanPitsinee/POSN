#include<bits/stdc++.h>
using namespace std;

int main() {
	string str; cin >> str;
	int n; cin >> n;
	for(int i=0;i<str.size();i++) {
		for(int j=0;j<n;j++) {
		//	for(int k=0;k<n*i;k++) cout<<'.';
			for(int k=0;k<str.size()-i;k++)
				for(int l=0;l<2*n;l++)
					if(l>=j and l<2*n-j-1) cout << str[i];
					else cout << '.';
			//for(int k=0;k<n*i;k++) cout<<'.';
			cout << '\n';
		}
	}
}
