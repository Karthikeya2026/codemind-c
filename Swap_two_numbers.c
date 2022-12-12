#include<stdio.h>
int main() 
{
 int first, second, temp;
 //printf("Enter first number: ");
 scanf("%d", &first);
 scanf("%d", &second);
 temp = first;
 first = second;
 second = temp;
 printf("%d
%d", first,second);
// printf("After swapping, second number = %.2lf", second);
 return 0;
}