#include<stdio.h>
int main(){
    int n,i,flag=0;
     int s=0;
    int  e;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }


    e=s/n;
    for(i=0;i<n;i++)
    {
        if(e==a[i])
        {
            flag=1;
            break;
        }
    }
        
    if(flag==1)
        printf("True");
    else printf("False");
    
}