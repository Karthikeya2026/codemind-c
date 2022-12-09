#include<stdio.h>
int main(){
    int a,i,s=0,p=1,e;
    scanf("%d",&a);
    while(a>0)
    {
        i=a%10;
        s=s+i;
        p=p*i;
        a=a/10;
        
        }
        e=p-s;
    printf("%d",e);
}