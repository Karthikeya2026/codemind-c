#include<stdio.h>
int main()
{
int y,x,i,sum=0;
scanf("%d%d",&y,&x);
for(i=y;i<x;i++)
{
if(i%3==0)
{
sum=sum+1;
}
}
printf("%d",sum);
}