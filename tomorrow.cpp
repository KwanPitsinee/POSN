//LANG :C++
#include<bits/stdc++.h>
using namespace std;

bool tf=false;
int M[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};

void leapy(int y){
	if(y%4==0){
		if(y%100==0){
			if(y%400==0){
			 tf=true;	
			}
		}
		else{tf=true;
		}
	}
	if(tf==false) M[2]=28;
	else M[2]=29;
	//cout<<M[2];
}

int main(){
	int d,m,y;
	cin>>d>>m>>y;
	leapy(y);
	if((d+1)>M[m]){
		m=m+1;
		d=1;
		if(m>12){
			m=1;
			y=y+1;
			cout<<d<<'\n'<<m<<'\n'<<y;
		}
		else{cout<<d<<'\n'<<m<<'\n'<<y;
		}
	}
	else{cout<<d+1<<'\n'<<m<<'\n'<<y;
	}	
}
