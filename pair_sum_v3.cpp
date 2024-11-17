//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int a[100005];
bool ck[1000005];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ck[a[i]]=true;
	}
	for(int i=1;i<=m;i++){
		int x;
		cin>>x;
		bool y=false;
		for(int j=1;j<=n;j++){
			
			if(ck[x-a[j]]==true){
				y=true;
				break;
			}
		}
		if(y==true) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
