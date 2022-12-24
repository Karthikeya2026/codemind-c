#include<stdio.h>
int prime(int i)
{
    int j;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b,i,j,l,k;
    scanf("%d%d",&a,&b);
    k=a+b;
    for(i=1;i<10;i++)
    {
        l=k+i;
        if(prime(l))
        {
            printf("%d",i);
            break;
        }
    }
}