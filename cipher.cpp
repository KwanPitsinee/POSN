//LANG : C++
#include<bits/stdc++.h>
using namespace std;

char c;
string st1;
string st2;
int a[1000];
	
int main(){
cin>>c>>st1>>st2;
int n1=st1.size();
int n2=st2.size();
	
	for(int i=0;i<n1;i++){
		a[i]=st1[i]-'a';	
	}
	
	if(c=='e'){
		for(int i=0;i<n2;i++){
			st2[i]=st2[i]+a[i%n1];
			if(st2[i]>'z'){
				//st2[i]=st2[i]-'z'+'a'-1;
				st2[i]=st2[i]-26;
			}
			cout<<st2[i];
		}
	}
	else if(c=='d'){
		for(int i=0;i<n2;i++){
			st2[i]=st2[i]-a[i%n1];
			if(st2[i]<'a'){
				//st2[i]=st2[i]+'z'+1;
				st2[i]=st2[i]+26;
			}
			cout<<st2[i];
		}
	}
	return 0;
}
