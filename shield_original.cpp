//LANG : C++
#include<bits/stdc++.h>
using namespace std;

char a[2100][2100];

void diamond(char c,int n){
	for(int i=1;i<=2*n+1;i++){
		for(int j=1;j<=2*n+1;j++){
			int d=abs(i-(n+1))+abs(j-(n+1));
			if(d<=n){
				a[i][j]=c;
			}
			
				
		}		
	}
	for(int i=1;i<=2*n+1;i++){
	 a[i][n+1]='+';	
	 a[i][i]='+';
	 a[i][n*2+2-i]='+';
	 a[n+1][i]='+';
	}
	
}

void print(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j];
		}
		cout<<'\n';
	}
}

int main(){
	memset(a,'.',sizeof a);
	char c;
	int n;
	cin>>c>>n;

	
	diamond(c,n);
	
	print((2*n+1));
}
