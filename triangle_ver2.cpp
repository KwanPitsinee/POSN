#include<bits/stdc++.h>
using namespace std;

int n;
string c_new;
bool chk[256];
char a[100][100];

void triangle(int h,string s,int x,int y){
	for(int i=1;i<=h;i++){
		for(int j=1;j<=2*h-1;j++){
			int d=abs(i-h)+abs(j-h);
			if(d<=h-1){
				a[i+x][j+y]=s[i-1];
      }
		}
	}
}

void print(int n,int m){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j];
		}
		cout<<'\n';
	}
}



int main(){
cin>>n;
//cout<<"n = "<<n<<"\n\n";
for(int i=1;i<=n;i++){
	char c;
	cin>>c;
	chk[c]=true;	
}
for(char i='A';i<='Z';i++){
	if(chk[i]==true){
		c_new=c_new+i;
	}
}
memset(a,' ',sizeof a);
int h=c_new.size();
triangle(h,c_new,0*h,   0*(2*h) + 1*(h));
triangle(h,c_new,1*h,   0*(2*h));
triangle(h,c_new,1*h,   1*(2*h));
  print(2*(h),2*(2*h));

memset(a,' ',sizeof a);
for(int i=0;i<3;i++){
  for(int j=0;j<=i;j++){
    triangle(h,c_new,i*h,j*(2*h)+(2-i)*h);    
  }
}
print(3*h,3*(2*h));
  
for(int i=3*h-1;i>=1;i--){
  for(int j=1;j<=3*(2*h);j++){
      cout<<a[i][j];
    }
    cout<<"\n";
  }
}
