
#define __USE_MINGW_ANSI_STDIO 0
#include<stdio.h>
#include<stdbool.h>
bool p[15485865];
int a[1000005];
//
void prime(){
  p[0]=true;
  p[1]=true;
  int m=15485863;
  int k=0;
  for(int i=2;i<=m;i++){
    if(p[i]==false){
      a[++k]=i;
      for(int j=2*i;j<=m;j+=i){
        p[j]=true;
      }
    }
  }
}

int main(){
  prime();
  int q;
  scanf("%d",&q);
  for(int i=1;i<=q;i++){
    int n;
    scanf("%d",&n);
    long long int ans;
    ans=1ll*a[n]*a[n];
    printf("%lld\n",ans);
  }
}

//https://crackncode.contest.codeforces.com/group/rn8uJP8lA7/contest/402572/attachments/download/17508/magicnumber.pdf
