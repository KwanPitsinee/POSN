//LANG : C++
#include<bits/stdc++.h>
using namespace std;


int main(){
	char c;
	int n,m;
	cin>>c>>n>>m;
	int k=2*n+1;
	for(int i=1;i<=k*m;i++){
		for(int j=1;j<=k*m;j++){
			//if(i==j || i+j==k*m+1) cout<<'#';
			
			 if(i+j==(2*n)+2) cout<<'+';
			 
			
			 //if(i%k+j%k>=2*n-1 && j%k-i%k<=n && i%k-j%k<=n && i%k+j%k<=3*n+2) cout<<c;
			
			else cout<<'.';
			}
			cout<<'\n';
		}
}
	
	

