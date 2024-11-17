//LANG :C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	char ch;
	int n,m;
	cin>>ch>>n>>m;
	
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if((j+i)%m==0){
			cout<<ch;
		}
		else{
			cout<<'.';
		}
		
	}
	cout<<'\n';
}

}
