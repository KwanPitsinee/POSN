//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b<=c || a+c<=b || b+c<=a){
		cout<<"No";
	}
	else{
		if(a==b && b==c && a==c) cout<<"equilateral";
		else if(a==b || b==c ||a==c) cout<<"isosceles";
		else cout<<"scalene";
	}
}
