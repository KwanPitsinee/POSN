//LANG:C++
#include<bits/stdc++.h>
using namespace std;

int x;
int p[50000001];

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin>>n;
	int mx=0;
	for(int i=1;i<=n;i++){
		int cnt=0;
		int x;
		cin>>x;
		if(mx<x){
			mx=x;
			for(int i=2;i<=x;i++){
				if(p[i]==0){
					for(int j=i*2;j<=x;j+=i){
						p[j]=1;
					}
				}
			}
		}
		if(p[x]==0) cout<<1<<'\n';
		else{
			for(int j=2;j<=x;j++){
				while(x%j==0 && p[j]==0){
					cnt++;
					x=x/j;
				}
			}
		}
		cout<<cnt<<'\n';
	}
	return 0;
}
