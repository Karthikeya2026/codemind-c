#include<stdio.h>
int main()
{
 float s,d,h,pf,gr;
 scanf("%f%f%f",&s,&d,&h);
 pf=(s*12)/100;
 gr=s+pf+d+h;
 printf("%.2f
%.2f",pf,gr);
}