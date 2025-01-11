

#include<stdio.h>
#include<math.h> 

int main()
{
    double a, b;
    double res;
    
    printf("Enter a number: ");
    scanf("%lf", &a);
    
    printf("Enter its power: ");
    scanf("%lf", &b);
    
    // Use pow() function for exponentiation
    res = pow(a, b);
    
    // Print the result using %Lf for long double
    printf("Answer = %lf\n", res);
    
    return 0;
}