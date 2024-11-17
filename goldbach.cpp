//LANG : C++
#include<bits/stdc++.h>
using namespace std;

bool p[30001];
int m=30001;

int main(){
	for(int i=2;i<=m;i++){
		if(p[i]==false){
			for(int j=2*i;j<=m;j+=i){
				p[j]=true;
			}
		}
	}
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	 int k;
	 cin>>k;
	 int cnt=0;
	 for(int j=2;j<=k/2;j++){
		if(p[j]==0 && p[k-j]==0) cnt++;
	 }
	 cout<<cnt<<'\n';
	}
}
