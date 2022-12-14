#include<stdio.h>
int main()
{
int x,y,i,c=0;
scanf("%d%d",&x,&y);
for(i=x;i<=y;i++)
{
if(i%6==0)
{
c=c+1;
}
}
printf("%d",c);
}