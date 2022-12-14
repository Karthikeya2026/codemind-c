#include<stdio.h>
int main()
{
    int a,i,n1=0,n2=1,n3;
    scanf("%d",&a);
    printf("0 1 ");
    for(i=2;i<a;++i)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}