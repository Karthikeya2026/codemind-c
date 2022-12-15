#include<stdio.h>
int main()
{
    int a,b,c,d,e,g,f;
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=c/10;
    f=d%10;
    g=f/10;
    if(b%2==0&&d%2==0&&f%2==0) printf("Even");
   else if(b%2==1&&d%2==1&&f%2==1) printf("Odd");
   else printf("Mixed");
}