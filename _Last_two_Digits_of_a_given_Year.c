#include <stdio.h>
int main()
{
 int year, ar;
 
 scanf("%d", &year);
 ar = year % 100;
 printf("%.2d", ar);
}
