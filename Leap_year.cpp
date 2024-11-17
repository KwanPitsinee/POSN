//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int y;
	cin>>y;
	if(y%4==0){
		if(y%100==0){
			if(y%400==0) cout<<"Yes";
			else {cout<<"No";
			}
		}
		else{cout<<"Yes";
		}
	}	
	else{
		cout<<"No";
	}
}
