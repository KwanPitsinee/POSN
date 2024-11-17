//LANG : C++
#include<bits/stdc++.h>
using namespace std;


int main(){
	char c;
	int n,m;
	cin>>c>>n>>m;
	int k=2*n+1;
	for(int i=0;i<k*m;i++){
		for(int j=0;j<k*m;j++){
			if(i==j || i+j==k*m-1 )cout<<'#';
			
			else if(i%k==j%k || i%k==n || j%k==n || i%k+j%k==2*n) cout<<'+';
			
			else if(i%k+j%k>=n && j%k-i%k<=n && i%k-j%k<=n && i%k+j%k<=3*n) cout<<c;
			
			else cout<<'.';
			}
			cout<<'\n';
		}
}
	
	

