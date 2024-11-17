/*
LANG : C++
*/
#include <iostream>
using namespace std;
int main(){
	int H,M,A,Ml;
	cin >> H >> M >> A;
	M=M+A;
	Ml=M;
	if(Ml>=60){
		Ml=Ml-60;
		H=H+1;
	}
	if(H>23){
		H=00;
	}
	{if(H<=9&&Ml<10){
		cout << " 0" << H << " 0" << Ml;
	}
	else if(H<=9){
		cout << " 0" << H << " " << Ml;
	}
	else if(Ml<10){
		cout << " " << H << " 0" << Ml;
	}
	else {
		cout << " " << H << " " << Ml;
	}
	}
	return 0;
}
