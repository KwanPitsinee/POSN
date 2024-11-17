//LANG : C++
#include<bits/stdc++.h>
using namespace std;

char a[2000][2000];

void N(int n,int x,int y){
	for(int i=1;i<=2*n-1;i++){
		a[i+x][1+y]='#';
		a[i+x][2*n-1+y]='#';
		a[i+x][i+y]='#';
	}
}

void I(int n,int x,int y){
	for(int i=1;i<=2*n-1;i++){
		a[i+x][1+y]='#';
	}
}

void S(int n,int x,int y){
	for(int j=2;j<=2*n-1;j++){
		a[1+x][j+y]='#';
	}
	for(int i=2;i<=n-1;i++){
		a[i+x][1+y]='#';
	}
	for(int i=n+1;i<=2*n-2;i++){
		a[i+x][2*n-1+y]='#';
	}
	for(int j=1;j<=2*n-2;j++){
		a[2*n-1+x][j+y]='#';
	}
	for(int j=2;j<=2*n-2;j++){
		a[n+x][j+y]='#';
	}
}

void A(int n,int x,int y){
	for(int i=2;i<=2*n-1;i++){
		a[i+x][1+y]='#';
		a[i+x][2*n-1+y]='#';
	}
	for(int j=2;j<=2*n-2;j++){
		a[1+x][j+y]='#';
	}
	for(int j=1;j<=2*n-1;j++){
		a[n+x][j+y]='#';
	}
}

void print(int n){
	for(int i=1;i<=2*n-1;i++){
		for(int j=1;j<=10*n+1;j++){
			cout<<a[i][j];
		}
		cout<<'\n';
	}
}

int main(){
	int n;
	cin>>n;
	memset(a,' ',sizeof a);
	N(n,0,0);
	I(n,0,2*n-1+1);
	S(n,0,2*n-1+3);
	S(n,0,4*n-2+4);
	A(n,0,6*n-3+5);
	N(n,0,8*n-4+6);
	print(n);
}
