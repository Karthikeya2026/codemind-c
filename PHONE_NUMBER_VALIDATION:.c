#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    scanf("%lf",&a);
    int d=log10(a)+1;
    if(d==10)printf("Valid");
else printf("Invalid");
    
}