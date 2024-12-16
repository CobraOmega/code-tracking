#include<stdio.h>
int main()
{
float a, b;
printf("Enter a number: ");
scanf("%f",&a);
printf("Enter a number: ");
scanf("%f",&b);

a = a - b; 
b = a + b; // b = (a - b) + b = a
a = b - a; // a = (a + b) - a = b
printf("After swapping a = %f\n", a);
printf("After swapping b = %f", b);
return 0;
}