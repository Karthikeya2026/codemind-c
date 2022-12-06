#include <stdio.h>
int main()
{
 float inches, cm;


 // printf("Enter the length in inches: ");
 scanf("%f", &inches);

 cm = inches * 2.54;


 printf("%.2f",cm);
 // printf("%.2f", cm);
 return 0;
}