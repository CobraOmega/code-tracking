//WAP to find out factorial number using for loop.
#include<stdio.h>

int main()
{
    int x, f = 1;

    printf("Enter a number to find it's factorial: ");
    scanf("%d",&x);

    for(int i = x; i >= 1; i--)
    {
        f = f * i;
    }
    printf("Factorial of %d is %d", x, f);
    
    return 0;
    
}