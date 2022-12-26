#include<stdio.h>
int main(){
    int n,c=0,k=0,max,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    scanf("%d",&max);;
    for(i=0;i<n;i++)
    {
        if(a[i]<=max)
        {
            c++;
        }
        else 
        {
            k++;
        }
    }
    printf("%d",c+(2*(k)));
    
}