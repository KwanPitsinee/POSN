//LANG : C++
#include<bits/stdc++.h>
using namespace std;

bool p[10000005];
int m=10000005;

int main(){
	for(int i=2;i<=m;i++){
		if(p[i]==false){
			for(int j=i*2;j<=m;j+=i){
				p[j]=true;
			}
		}
	}
	
	
	int N;
	cin>>N;
	for(int k=1;k<=N;k++){
		int n;
		cin>>n;
		//if(p[n]==false && p[n+2]==false) cout<<n<<' '<<n+2<<'\n';
	 for(int i=n;i<=m;i++){
	 	if(p[i]==false && p[i+2]==false){
	 		cout<<i<<' '<<i+2<<'\n';
	 		break;
		 }
	 }
	}
}
