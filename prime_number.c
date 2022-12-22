#include<stdio.h>
int main(){
    int a,flag=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0){
            flag++;
        }
    }
    if(flag==2)
    {
        printf("prime");
    }
    else printf("not a prime");
    
}