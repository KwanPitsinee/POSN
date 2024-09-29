#define __USE_MINGW_ANSI_STDIO 0

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int N[100];
char c[105][105];

void diamond(int N){
	for(int i=1;i<=N-(N+1)/4;i++){
		for(int j=1;j<=N;j++){
			int d=abs(i-((N/4)+1))+abs(j-(N+1)/2);
			if(d<=N/2){
				c[i][j]='#';
			}
		}
	}
	for(int i=1;i<=(N+1)/4;i++){
		for(int j=1;j<=N;j++){
			int d=abs(i-1)+abs(j-(N+1)/2);
			if(d<=(N)/4-1){
				c[i][j]='.';
			}
		}
	}
	 
}

void print(int N){
	for(int i=1;i<=N-(N+1)/4;i++){
		for(int j=1;j<=N;j++){
			//cout<<c[i][j];
      printf("%c",c[i][j]);
		}
		//cout<<'\n';
    printf("\n");
	}
}

int main(){

	int Q;
	//cin>>Q;
  scanf("%d",&Q);
	
	for(int i=1;i<=Q;i++){
		//cin>>N[i];
    scanf("%d",&N[i]);
		memset(c,'.',sizeof c);
		diamond(N[i]);
		print(N[i]);
	}
	
}

//https://crackncode.contest.codeforces.com/group/rn8uJP8lA7/contests
