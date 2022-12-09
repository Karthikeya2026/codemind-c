#include<stdio.h>
int main(){
    int a,c=0;
    scanf("%d",&a);
    while(a!=0){
        int b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("%d",c);
}