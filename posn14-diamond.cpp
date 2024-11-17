//LANG : C++
#include<bits/stdc++.h>
using namespace std;

bool ck[256];
string c_new;
char b[500][500];

void diamond(string c,int h){
	for(int i=1;i<=2*h-1;i++){
		for(int j=1;j<=2*h-1;j++){
			int d=abs(i-h)+abs(j-h);
			if(d<=h-1){
				b[i][j]=c[h-1-d];
			}
		}
	}
	
}

void print(int n,int m){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<b[i][j];
		}
		cout<<'\n';
	}
	
}

int main(){
	memset(b,' ',sizeof b);
	int n;
	cin>>n;
	char a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];		
		ck[a[i]]=true;
	}
	
	for(char i='A';i<='Z';i++){
		if(ck[i]==true){
			c_new=c_new+i;
		}
	}
	int h=c_new.size();
	
	diamond(c_new,h);
	print (2*h-1,2*h-1);
	
	
}
