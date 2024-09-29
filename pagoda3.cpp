//LANG : C++
#include<bits/stdc++.h>
using namespace std;

char a[150][250];

void pagoda(char c,int w,int x,int y){
	for(int i=1;i<=w;i++){
		for(int j=1;j<=2*w;j++){
			int d=abs(i-w)+abs(j-w);
	        if(d<=w-1){
	 	      a[i+x][j+y]=c;
	        }
		}
	}
	
}

void print(int w,int h){
	for(int i=1;i<=w*h;i++){
		for(int j=1;j<=2*w*h;j++){
			cout<<a[i][j];
		}
		cout<<'\n';
	}
}

int main(){
	char c;
	int w,h;
	cin>>c>>w>>h;
	memset(a,'.',sizeof a);
	for(int i=0;i<h;i++){
		for(int j=0;j<=h-h+i;j++){
			pagoda(c,w,w*i,(j*2*w)+((h-1-i)*w));
		}
	}
	print(w,h);
}
/*
.....*......
....***.....
...*****....
..*.....*...
.***...***..
*****.*****.

*/
