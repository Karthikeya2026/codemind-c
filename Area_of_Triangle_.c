#include<stdio.h>
#include<math.h>
int main()
{
 float A,B,C,D,E;
 scanf("%f%f%f",&A,&B,&C);
 D=(A+B+C)/2;
 E=sqrt(D*(D-A)*(D-B)*(D-C));
 printf("%.2f",E);
}