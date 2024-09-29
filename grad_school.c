
#include<stdio.h>
#include<math.h>

int main(){
int n;
  scanf("%d",&n);
  float a=0;
  float b=0;
  float c=0;
  float d=0;

  int i=0;
  for(i;i<n;i++){
    scanf("%f",&a);
    scanf("%f",&b);
    d=d+b;
    c=c+(a*b);
  }
  float f=c/d;
  printf("%f",f);
  
}

