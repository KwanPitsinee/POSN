#include<bits/stdc++.h>
using namespace std;

char a[2000][2000];
string st;


void diamond(char c,int h,int x,int y){
	for(int i=1;i<=h;i++){
		for(int j=1;j<=2*h;j++){
			int d=abs(i-h)+abs(j-h);
			if(d<=h-1){
				a[i+x][j+y]=c;
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
memset(a,'.',sizeof a);
int h;
cin>>st>>h;
int k=st.size();
int r=3;


for(int i=0;i<r*k;i++){
	for(int j=0;j<=i;j++){
		int x=i%k;
        int y=j%k;
		if(x>=y) diamond(st[x],h,i*h,(j*2*h)+(r*k-1-i)*h);
		
	}
}
print(h*k*r,2*h*k*r);	
}
