#include<stdio.h>
int main()
{
    int n,flag=0,d,b,c,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
         d=a[i]+c;
        if(d>=max)
       printf("True ");
      else 
      printf("False ");
    }
    d=0;
}