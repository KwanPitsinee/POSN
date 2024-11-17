//LANG : C++
#include<bits/stdc++.h>
using namespace std;

char a[205][205];

void diamond(char c,int n,int x,int y){
	for(int i=1;i<=2*n+1;i++){
		for(int j=1;j<=2*n+1;j++){
			int d=abs(i-n-1)+abs(j-n-1);
			if(d<=n){
				a[i+x][j+y]=c;
			}
		}
	}
}

void print(int n,int w,int l){
	for(int i=1;i<=(2*n+1)*(l+1);i++){
		for(int j=1;j<=w;j++){
			cout<<a[i][j+2*n+1];
		}
		cout<<'\n';
	}
}

int main(){
	char c;
	int n,w,l;
	cin>>c>>n>>w>>l;
	memset(a,'.',sizeof a);
	
	int p=(2*n+1)*(l+1)/(2*n+1)+3;
	int o=w/(2*n+1)+3;
	
	for(int i=0;i<p;i++){
		for(int j=0;j<o;j++){
			diamond(c,n,(n*2+1)*i,(2*n+1)*j+i%(2*n+1));
		}
	}
	print(n,w,l);
}




