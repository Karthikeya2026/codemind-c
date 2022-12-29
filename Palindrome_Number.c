#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int j=0;j<a;j++)
    {
        int b,s=0,d;
        scanf("%d",&b);
        int y=b;
        while(b!=0)
        {
            d=b%10;
            s=s*10+d;
            b=b/10;
        }
        if(s==y) printf("True
");
        else printf("False
");
    }
}