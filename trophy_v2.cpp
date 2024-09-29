//LANG : C++
#include<bits/stdc++.h>
using namespace std;

char a[2005][2005];

void trophy(char c,int n,int x,int y){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*n;j++){
			int d=abs(i-1)+abs(j-n);
			if(d<n-1){
				a[i+x][j+y]=c;
			}
			if(d==n-1){
				a[i+x][j+y]='#';
			}
		}
	}
}

void print(int n,int m){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j];
		}
		cout<<'\n';
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string st;
	int n;
	cin>>st>>n;
	memset(a,'.',sizeof a);
	int s=st.size();
	for(int i=0;i<s;i++){
		for(int j=0;j<s-i;j++){
			trophy(st[i],n,i*n,(2*n*j)+n*i);
		}
	}
	print(n*st.size(),2*n*st.size());
}
