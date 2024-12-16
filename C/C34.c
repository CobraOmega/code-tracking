//WAP to find sum of all odd numbers between 1 to n.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i+=2)
    {
        sum = sum + i;;
    }

    printf("Sum of all Odd numbers between 1 to %d is %d", n, sum);
    return 0;
}