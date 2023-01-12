#include<stdio.h>
int main()
{
    int n,i,j,p=0,max=9999;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max>a[i])
        max=a[i];
    }
    
    for(i=max;i>=1;i--)
    {
        p=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i!=0)
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            printf("%d",i);
            break;
        }
    }
    
}