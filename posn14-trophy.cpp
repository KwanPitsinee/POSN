//LANG : C++
#include<bits/stdc++.h>
using namespace std;

string st;
int h;
char a[3000][6000];



void trophy3(char c,int h,int n,int x,int y){
	for(int i=1;i<=h;i++){
		for(int j=1;j<=(2*h)-1;j++){
			int d=abs(i-1)+abs(j-h);
			if(d<=h-1){
		a[i+x][j+y]=c;
			}
		}
	}
	
	
}

void print(int h,int n){
	for(int i=1;i<=h*n;i++){
		for(int j=1;j<=2*h*n;j++){
		cout<<a[i][j];
	}
	cout<<'\n';
	}
	
}

int main(){
	memset(a,'.',sizeof a);
	cin>>st>>h;
	int n=st.size();
	for(int i=0;i<n;i++){
	 for(int j=0;j<n-i;j++){
	 	char c=st[i];
	  trophy3(c,h,n,i*h,(j*(2*h)+(i*h)));	
	 }	
		
	}
	
	print(h,n);
	
}
