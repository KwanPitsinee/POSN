
#define __USE_MINGW_ANSI_STDIO 0
#include<stdio.h>
#include<stdbool.h>

int a[7];
int p[100001];

int main(){
  for(int i=1;i<=100000;i++){
    int d=i;
    int j=0;
    while(d>=10){
      a[j]=d%10;
      d=d/10;
      j++;
    }
    a[j]=d;
    int e=0;
    bool chk=true;
    for(int k=0;k<=j;k++){
      if(a[k]!=0 && a[k]!=1 && a[k]!=6 && a[k]!=8 && a[k]!=9) chk=false;
      if(a[k]==6) a[k]=9;
      else if(a[k]==9) a[k]=6;
      e=e*10+a[k];
    }
    if(e==i && chk==true){
      p[i]++;
    } 
    p[i]=p[i]+p[i-1];
  }
  /*
  for(int i=1;i<=100;i++){
    printf("%d: %d\n",i,p[i]) ; 
  }
  */
  //*
  int n;
  scanf("%d",&n);
  while(n--){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d\n",p[y]-p[x-1]);
  }
  //*/
}


//https://crackncode.contest.codeforces.com/group/rn8uJP8lA7/contest/402572

//https://vjudge.net/contest/197330#overview


