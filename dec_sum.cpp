//LANG:C++
#include<bits/stdc++.h>
using namespace std;

string str;
int re(int x) {
	if(x==str.size()) return 0;
	return str[x]-'0'+re(x+1);
}

int main(){
	cin >> str;
	cout << re(0);
}

