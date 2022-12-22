#include<stdio.h>
int main(){
    int a,b,c,flag=0,i;
    scanf("%d%d%d",&a,&b,&c);
    for(i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            flag++;
        }
    }
    printf("%d",flag);
}