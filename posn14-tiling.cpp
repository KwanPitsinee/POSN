//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	int n[110];
	int m[110];
	int sqn[110];
	int m_new[110];
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n[i]>>m[i];
		sqn[i]=sqrt(n[i]); //sqn is length of side
		m_new[i]=4*(sqn[i])+4;//m_new is number of black tile
	}
		for(int i=1;i<=t;i++){
		 if(m_new[i]<=m[i]){
		 	cout<<sqn[i]+2<<'\n';
		 }
		 if(m_new[i]>m[i]){
		 	sqn[i]=(m[i]-4)/4;
		 	cout<<sqn[i]+2;
		 }
		}

}
