// LANG:C++
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2; cin >> s1 >> s2;
	int lcs[s1.size()+1][s2.size()+1];
	for(int i=0;i<s1.size()+1;i++) {
		for(int j=0;j<s2.size()+1;j++) {
			if(i==0 || j==0)
				lcs[i][j]=0;
			else if(s1[i-1]==s2[j-1])
				lcs[i][j]=lcs[i-1][j-1]+1;
			else
				lcs[i][j]=max(lcs[i-1][j], lcs[i][j-1]);
		}
	}
	cout << lcs[s1.size()][s2.size()];
	return 0;
}
