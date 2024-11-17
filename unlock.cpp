//LANG :C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str; cin >> str;
	int pi,pj;
	char key[4][3]={
	{'1','2','3'},
	{'4','5','6'},
	{'7','8','9'},
	{'*','0','#'}
	};
	
	for(int i=0;i<=4;i++){
		for(int j=0;j<3;j++){
			if(str[0]==key[i][j]){
				pi=i;
				pj=j;
				break;
			}			
		}		
	}
	cout<<key[pi][pj];
	for(int i=1;i<str.size();i++){
		char x=str[i];
		    if(x=='a'){
			pj=pj-1;
		}
		    else if(x=='d'){
			pj=pj+1;
		}
			else if(x=='w'){
			pi=pi-1;
		}
			else if(x=='x'){
			pi=pi+1;
		}
			else if(x=='q'){
			pi=pi-1;
			pj=pj-1;
		}
			else if(x=='c'){
			pi=pi+1;
			pj=pj+1;
		}
			else if(x=='z'){
			pi=pi+1;
			pj=pj-1;
		}
			else if(x=='e'){
			pi=pi-1;
			pj=pj+1;
		}
		cout<<key[pi][pj];
	}
}
