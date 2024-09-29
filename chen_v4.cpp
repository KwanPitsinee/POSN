//LANG : C++
#include<bits/stdc++.h>
using namespace std;

bool p[2000000005];

void prime(){
	p[0]=true;
	p[1]=false;
	int m=2000000000;
	for(int i=2;i<=m;i++){
		if(p[i]==false){
			for(int j=2*i;j<=m;j+=i){
				p[j]=true;
			}
		}
		
	}
}

int main(){
	int x,y;
	cin>>x>>y;
	prime();
	int cnt=0;
	for(int i=x;i<=y;i++){
		if(p[i]==false){
			if(p[i+2]==false) cnt++;
			else{
				for(int j=2;j<=sqrt(i+2);j++){
					if(p[j]==false || (i+2)%j==0 ){
					  int d=p[i+2]/p[j];
						if(p[d]==false){
								cnt++;
						}
					
					}
				}
			}
		}
	}
	cout<<cnt;
}
