//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,m,a,b; //n is start of month m is end of month
	int sum; //sum is totle of days.
	cin>>a>>n>>b>>m;
	if(n!=m){
	for(int i=n+1;i<=m-1;i++){
			sum=sum+mon[i];
	}
	sum=sum+mon[n]-a+1+b;	
}
else{
	sum=b-a+1;
}

	cout<<sum;
}
