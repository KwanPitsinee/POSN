//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int a[9];
vector<int>s;

void rec(int n){
	if(s.size()==n){
		for(auto j:s) cout<<j<<' ';
		cout<<'\n';
	return;
	
	}
	for(int i=1;i<=n;i++){
		s.push_back(i);
		rec(n);
		s.pop_back();
	
	}

}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		//cin>>a[i];
	}
	rec(n);
	
	
}
