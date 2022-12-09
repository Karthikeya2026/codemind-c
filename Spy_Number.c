#include<stdio.h>
int main(){
    int a,s=0,p=1,b;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        s=s+b;
        p=p*b;
        a=a/10;
    }
    if(s==p) printf("Spy Number");
    else printf("Not Spy Number");
}