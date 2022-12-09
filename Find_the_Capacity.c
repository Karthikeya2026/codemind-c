#include<stdio.h>
int main(){
    int a,b,c,p,q;
    scanf("%d%d%d",&a,&b,&c);
      p=a*b*c*2*512;
      q=p/1024;
    printf("%dKB",q);
}