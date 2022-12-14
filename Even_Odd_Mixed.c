#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=a%10;
    e=a/10;
    f=e%10;
    if(b%2==0&&d%2==0&&f%2==0) printf("Even");
    else if(b%2==1&&d%2==1&&f%2==1) printf("Odd");
    else printf("Mixed");
}